/*
 Create a class Complex with real and imaginary data members. Implement:
 1)a default constructor,
 2)a parameterized constructor
 3)a display function
*/
#include <iostream>
using namespace std;
class Complex
{
    public:
    int real, imag;
    Complex()
    {
        real = 10;
        imag = 2;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex c1;
    Complex c2(5, 3);
    cout << "Default Constructor: ";
    c1.display();
    cout << "Parameterized Constructor: ";
    c2.display();
    return 0;
}
