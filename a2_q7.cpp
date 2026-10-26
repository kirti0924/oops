/*
create a class demo and display a message when its constuctor is called and another 
message when its destructor is caleed . create multiple objects of the class and 
observe the order in which constructor and destructor execute
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
int main()
{
    Demo d1;
    Demo d2;
    Demo d3;
    return 0;
}
