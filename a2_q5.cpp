/*
Write a program to demonstrate constructor overloading using a class Student. Create:
• a delault constructor,
a constructor accepting name and roll number,
• a constructor accepting name, roll number, and CGPA.
Display the details of objects created using all three constructors.
*/
#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    float cgpa;
    public:
    Student()
    {
        name = "kirti";
        roll = 59;
        cgpa = 8.5;
    }
    Student(string n, int r)
    {
        name = n;
        roll = r;
        cgpa = 8.6;
    }
    Student(string n, int r, float c)
    {
        name = n;
        roll = r;
        cgpa = c;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "................" << endl;
    }
};
int main()
{
    Student s1;
    Student s2("khushi", 101);
    Student s3("Priya", 102, 8.7);
    cout << "Default Constructor:" << endl;
    s1.display();
    cout << "Constructor with Name and Roll Number:" << endl;
    s2.display();
    cout << "Constructor with Name, Roll Number and CGPA:" << endl;
    s3.display();
    return 0;
}
