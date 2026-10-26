/*
    Create a class Rectangle having data members length and breadth.
    use a parameterized constructor to initialize the 
    values and display the area of the
*/
#include<iostream>
using namespace std;
class rectangle
{
    int len;
    int breadth;
    public:
       rectangle(int l,int b)
       {
        len = l;
        breadth = b;
       }
       void display()
       {
        cout<<"len is: "<<len<<endl;
        cout<<"bredth is: "<<breadth<<endl;
        cout<<"area of rectangle is. "<<len*breadth;
       }
};
int main()
{
    rectangle r(20,40);
    r.display();
    return 0;
}