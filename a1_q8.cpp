/*
Implement namespace in a program to illustrate the use of same name variables and 
functions in different sections/libraries of the code
*/
#include <iostream>
using namespace std;
namespace First
{
    int num = 10;
    void display()
    {
        cout << "First namespace" << endl;
        cout << "Number: " << num << endl;
    }
}
namespace Second
{
    int num = 20;
    void display()
    {
        cout << "Second namespace" << endl;
        cout << "Number: " << num << endl;
    }
}
int main()
{
    cout << "\nFirst number: " << First::num << endl;
    cout << "Second number: " << Second::num << endl;
    return 0;
}
