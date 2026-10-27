/*  create a class number containing an integer data member . Create a two objects 
    and overload the following operator ..
    1) + to add the values.
    2) - to subtract the values.
    display the result of both operator */ 
#include<iostream>
using namespace std;
class number
{
    int value;
    public:
       number()
       {
           value = 0;
       }
       number(int v)
       {
           value = v;
       }
       number operator +(number v1)
       {
           return number(value+v1.value);
       }
       number operator -(number v2)
       {
           return number(value-v2.value);
       }
       void display()
       {
           cout<<"value = "<<value<<endl;
       }
};
int main()
{
    number num1(6);
    number num2(4);
    number num3;
    number num4;
    num3 = num1 + num2;
    num4 = num1 - num2;
    cout<<"first value is :>\n";
    num1.display();
    cout<<"second value is :>\n";
    num2.display();
    cout<<"sum of two number is : ";
    num3.display();
    cout<<"sub of two number is : ";
    num4.display();
    return 0;
}
