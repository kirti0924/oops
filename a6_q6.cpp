/*
Create a class Student with a data member CGPA. Create two student objec nd overload the following relational operators
: check wich ten sas designer chame CGPA.
Display an appropriate message based on the comparison.
*/

#include <iostream>
using namespace std;
class Student
{
    public:
    float CGPA;
    Student(float c)
    {
        CGPA = c;
    }
    bool operator>(Student s)
    {
        return CGPA > s.CGPA;
    }
};
int main()
{
    Student s1(8.5);
    Student s2(9.2);
    if (s1 > s2)
    {
        cout << "First student has higher CGPA.";
    }
    else if (s2 > s1)
    {
        cout << "Second student has higher CGPA.";
    }
    else
    {
        cout << "Both students have equal CGPA.";
    }
    return 0;
}
