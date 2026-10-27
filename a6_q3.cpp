/*  create a class number containing an integer data member value. Create a two objects 
    and overload the binary + operator  to add the values stored in two objects .
    Display the result */ 
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
       number operator +(number v)
       {
           number tem;
           tem.value = value+v.value;
           return tem;
       }
       void display()
       {
           cout<<"value = "<<value<<endl;
       }
};
int main()
{
    number num1(4);
    number num2(6);
    number num3;
    num3 = num1 + num2;
    cout<<"first value is :>\n";
    num1.display();
    cout<<"second value is :>\n";
    num2.display();
    cout<<"sum of two number is : ";
    num3.display();
    return 0;
}
