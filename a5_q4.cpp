/*
Create a class with overloaded result functions to display marks in one subject, 
calculate the average of two subjects, and calculate the average of three subject
*/

#include <iostream>
using namespace std;
class Student
{
    public:
    void result(int a)
    {
        cout << "Marks in 1 subject: " << a << endl;
    }
    void result(int a, int b)
    {
        cout << "Average of 2 subjects: " << (a + b) / 2.0 << endl;
    }
    void result(int a, int b, int c)
    {
        cout << "Average of 3 subjects: " << (a + b + c) / 3.0 << endl;
    }
};
int main()
{
    Student s;
    s.result(80);
    s.result(70, 90);
    s.result(80, 85, 90);
    return 0;
}

