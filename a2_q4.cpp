/*
Create a class Box with data members length, width, and height. Implement:
a default constructor, 
a parameterized constructor,
a function to calculate and display volume.
*/
#include<iostream>
using namespace std;
class box
{
    int length;
    int width; 
    int height;
    public:
       box()
       {
        length = 2;
        width = 4; 
        height = 3;
       }
       box(int l,int w,int h)
       {
        length = l;
        width  = w; 
        height = h;
       }
       void display()
       {
        cout<<"length, width, and height is: "<<length <<" "<<width<<" "<<height<<" "<<endl;
        cout<<"volume is "<<length*width*height<<endl;
       }
};
int main()
{
    box b1;
    b1.display();
    box b2(3,9,2);
    b2.display();
    return 0;
}