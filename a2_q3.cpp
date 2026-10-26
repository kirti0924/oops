/*
Write a C++ program to create a class Employee with data members name, id, and salary.
Initialize the data members using a parameterized constructor and display the employee
*/
#include<iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    int salary;
    public:
       Employee(string n,int ID,int s)
       {
        name = n;
        id = ID;
        salary = s;
       }
       void display()
       {
        cout<<"name is: "<<name<<endl;
        cout<<"id is: "<<id<<endl;
        cout<<"salary is: "<<salary<<endl;
       }
};
int main()
{
    Employee e1("kirti",101,50000);
    e1.display();
    return 0;
}