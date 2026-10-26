/*
write a c++ program to demonstrate the execution order of constructors 
and destructors when objects are created inside main() and inside a separate function.
*/

#include <iostream>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout << "Constructor called" << endl;
    }
    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void display()
{
    cout << "Inside separate function" << endl;
    Demo d3;
    Demo d4;
}
int main()
{
    cout << "Inside main function" << endl;
    Demo d1;
    Demo d2;
    display();
    cout << "Back inside main function" << endl;
    return 0;
}
