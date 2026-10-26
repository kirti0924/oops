/*
Define a class named Complex with properties (real and imaginary) and methods as per 
following details.
void set O to initialize object values. void display O to display complex number.
Complex sum (Complex) or void sum (Complex) to add two complex numbers
(objects of Complex class)and return complex_number (object of Complex class) as result
*/
#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
public:
    void set(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex sum(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.set(3, 4);
    c2.set(5, 6);
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    c3 = c1.sum(c2);
    cout << "Sum: ";
    c3.display();
    return 0;
}