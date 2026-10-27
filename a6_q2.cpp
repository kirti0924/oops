/*  create a class number with an integer data member value. overload the unary--
operator  to decrease the value of count by 1 .Disaplay its value before
 and after applying ++   
*/ 
#include<iostream>
using namespace std;
class number
{
    int count;
    public:
       number()
       {
           count = 10;
       }
       void operator--()
       {
           count--;
       }
       void display()
       {
           cout<<"count = "<<count<<endl;
       }
};
int main()
{
    number c;
    cout<<"before increment value of count is :>\n";
    c.display();
    --c;
    cout<<"after increment value of count is :>\n";
    c.display();
    return 0;
}
