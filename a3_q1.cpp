/*
Question: Create a class Student with private data members name and marks.
 Write a friend function to access and display these private data members
*/
#include<iostream>
using namespace std;
#include<string>
class student
{
    string name;
    int marks;
    public:
      student(string n , int m)
      {
        name=n;
        marks=m;
      }
      friend void display(student s1);
};
void display(student s1)
{
    cout<<s1.name;
    cout<<s1.marks;
}
int main()
{
    student s1("xys",88);
    display(s1);
    return 0;
}