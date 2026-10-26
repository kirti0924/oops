/*
Create a code snippet that illustrates the following:
a. Calling of private member functions inside public member function
b. Access private member functions inside public member function
*/
#include <iostream>
using namespace std;
class Student
{
private:
    void showName()
    {
        cout << "Name: kirti" << endl;
    }
    void showRollNo()
    {
        cout << "Roll No: 59" << endl;
    }
public:
    void display()
    {
        showName();
        showRollNo();
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}