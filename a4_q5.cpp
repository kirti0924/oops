/*
Constructors in Inheritance
Create a base class College with a constructor that
   initializes the college name.
Create a derived class Department with a constructor    
    that initializes the department name.
Create an object of Department and display both names,
   demonstrating the order in which constructors execute.
*/
#include<iostream>
using namespace std;
class college
{
      string college_name;
      public:
        college(string c)
        {
            college_name=c;
        }
      void display()
      {
        cout<<"college_name> "<<college_name<<endl;
      }
};
class department : public college
{
    string department_name;
    public:
      department(string c,string d) : college(c)
      {
        department_name=d;
      }
      void display_deparment()
      {
        cout<<"department> "<<department_name<<endl;
      }
};
int main()
{
    department d1("thapar","mca");
    d1.display();
    d1.display_deparment();
    return 0;
}