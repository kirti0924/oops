/*
WAP to demonstrate for, while, do-while (with all possible variations), like 
for loop can be demonstrated without giving initialization in for construct or 
without giving increment in for construct.
Sample:
for (int i=0; i<10; it+)
i=0
for (; i<10; it+)
1=0
for (; i<10;) it+
*/
#include <iostream>
using namespace std;
int main()
{
    int i;

    //  Normal for loop
    cout << "1. Normal for loop:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }

    // For loop without initialization
    cout << "\n\n2. For loop without initialization:" << endl;
    i = 0;
    for (; i < 5; i++)
    {
        cout << i << " ";
    }

    //  For loop without increment
    cout << "\n\n3. For loop without increment:" << endl;
    i = 0;
    for (; i < 5; )
    {
        cout << i << " ";
        i++;
    }

    //  For loop without condition
    cout << "\n\n4. For loop without condition:" << endl;
    i = 0;
    for (;;)
    {
        if (i == 5)
            break;

        cout << i << " ";
        i++;
    }

    //  Normal while loop
    cout << "\n\n5. Normal while loop:" << endl;
    i = 0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }

    //  While loop with condition
    cout << "\n\n6. While loop with condition:" << endl;
    i = 10;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << "Loop does not execute";

    //  Normal do-while loop
    cout << "\n\n7. Normal do-while loop:" << endl;
    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    // Do-while with condition
    cout << "\n\n8. Do-while with condition:" << endl;
    i = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    return 0;
}
