/*
Sum using a friend function
create a class Number with two private data members,a and b. 
Use a friend function to calculate and display their sum
*/
#include<iostream>
using namespace std;
class number
{
    int a,b;
    public:
       number(int n1,int n2)
       {
         a=n1;
         b=n2;
       }
      friend void display(number num1);
};
void display(number num1)
{
    cout<<"sum of 2 number is"<<num1.a+num1.b;
}
int main()
{
    number n1(10,20);
    display(n1);
    return 0;
}