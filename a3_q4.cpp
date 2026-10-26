/*
Create a class Student with a static data member to keep track of the number 
of objects created. Create three objects and display the total number of objects.
*/
#include <iostream>
using namespace std;
class Student
{
    public:
    static int count;
    Student()
    {
        count++;
    }
    void display()
    {
        cout << "Total objects created: " << count << endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1;
    Student s2;
    Student s3;
    s1.display();
    return 0;
}
