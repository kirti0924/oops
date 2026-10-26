/*
Differentiate between private and public access/scope. 
Perform the question no. 4 with class instead of structure with having 
the data members private and some member functions in private scope and 
some in public scope.
*/
#include <iostream>
using namespace std;
class Student
{
private:
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;
public:
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Degree: ";
        cin >> Degree;
        cout << "Enter Hostel: ";
        cin >> Hostel;
        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }
    void updateCGPA()
    {
        cout << "Enter updated CGPA: ";
        cin >> CurrentCGPA;
    }
    void updateHostel()
    {
        cout << "Enter new Hostel: ";
        cin >> Hostel;
    }
    void displayDetails()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};
int main()
{
    Student s;
    s.addDetails();
    s.displayDetails();
    cout << "\nUpdate CGPA:" << endl;
    s.updateCGPA();
    cout << "\nUpdate Hostel:" << endl;
    s.updateHostel();
    cout << "\nUpdated Student Details:" << endl;
    s.displayDetails();
    return 0;
}
