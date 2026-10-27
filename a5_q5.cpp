/*
Find the Maximum (Moderate)
Create a class Maximum with overloaded functions named findMax:
• findMaxint a, int b) — find the greater of two integers.
• findMaxint a, int b, int c) — find the greatest of three integers.
• findMax(double a, double b) — find the greater of two decimal numbers
*/

#include <iostream>
using namespace std;
class Maximum
{
    public:
    int findMax(int a, int b)
    {
        if (a > b)
            return a;
        else
            return b;
    }
    int findMax(int a, int b, int c)
    {
        if (a > b && a > c)
            return a;
        else if (b > c && b > a)
            return b;
        else
            return c;
    }
    double findMax(double a, double b)
    {
        if (a > b)
            return a;
        else
            return b;
    }
};
int main()
{
    Maximum m;
    cout << "Maximum of 2 integers: "<< m.findMax(10, 20) << endl;
    cout << "Maximum of 3 integers: "<< m.findMax(15, 25, 10) << endl;
    cout << "Maximum of 2 decimal numbers: "<< m.findMax(5.5, 8.7) << endl;
    return 0;
}
