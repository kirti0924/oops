/*
single inheritance..
Base class Person: name, age
Derived class Student: rollNumber, course
A function to accept all details.
A function to display all details.
Create a Student object in main()
*/
#include<iostream>
using namespace std;
#include<string>
class person
{
    public:
      string name;
      int age;
      void display()
      {
        cout<<"name is> "<<name<<endl;
        cout<<"age is> "<<age<<endl;
      }
};
class Student: public person
{
    public:
    int rollnumber;
    string course;
    void display_student()
    {
        cout<<"rollno is> "<<rollnumber<<endl;
        cout<<"course is> "<<course<<endl;
    }
};
int main()
{
    Student s1;
    s1.name="xyz";
    s1.age=20;
    s1.rollnumber=59;
    s1.course="mca";
    s1.display();
    s1.display_student();
    return 0;
}