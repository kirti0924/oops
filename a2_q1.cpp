/*   Write a C+t program to create a class Student with 
    data members name and rollNo. Use a default constructor to
    initialize these values and display the student  */
#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    public:
       student()
       {
        name = "kirti";
        rollno = 59;
       }
       void display()
       {
        cout<<"name is: "<<name<<endl;
        cout<<"rollno is: "<<rollno<<endl;
       }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}