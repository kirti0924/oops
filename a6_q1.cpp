/*   create a class counter with an integer data member count. overload the unary++
operator  to increase the value of count by 1 . create an object and disaplay its
value before and after applying ++    */ 
#include<iostream>
using namespace std;
class counter
{
    int count;
    public:
       counter()
       {
           count = 10;
       }
       void operator++()
       {
           count++;
       }
       void display()
       {
           cout<<"count = "<<count<<endl;
       }
};
int main()
{
    counter c;
    cout<<"before increment value of count is :>\n";
    c.display();
    ++c;
    cout<<"after increment value of count is :>\n";
    c.display();
    return 0;
}
