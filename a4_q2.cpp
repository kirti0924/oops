/*
Multilevel Inheritance
Create three classes:
Person — stores name
Employee — stores employeeID and inherits from Person
Manager — stores department and inherits from Employee
*/
#include<iostream>
using namespace std;
#include<string>
class person
{
    public:
      string name;
      void display()
      {
        cout<<"name is> "<<name<<endl;
      }
};
class employee : public person 
{
    public:
      int employee_id;
      void display_emp()
      {
        cout<<"id is> "<<employee_id<<endl;
      }
};

class manager: public employee
{
    public:
    string department;
    void display_student()
    {
        cout<<"rdepartment> "<<department<<endl;
    }
};
int main()
{
    manager s1;
    s1.name="xyz";
    s1.employee_id=20;
    s1.department="mca";
    s1.display();
    s1.display_emp();
    s1.display_student();
    return 0;
}