/*
Compare Employee Salaries.
Create a class Employee with:
A private data member salary
A constructor to initialize salary
A friend function compare() to compare the salaries of two objects and
   display the higher salary.
*/
#include<iostream>
using namespace std;
class emp
{
    int salary;
    public:
       emp(int s)
       {
        salary = s;
       }
      friend void display(emp e1,emp e2);
};
void display(emp e1,emp e2)
{
    if(e1.salary>e2.salary)
    {
        cout<<e1.salary<<"larger";
    }
    else
    {
        cout<<e2.salary<<"larger";
    }
}
int main()
{
    emp n1(145500);
    emp n2(200000);
    display(n1,n2);
    return 0;
}