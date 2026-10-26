/*
Create a structure in Ct+ containing the details of Students as details 
below and a main function to execute the structure.
Data Members(properties):
Name
Roll No Degree
Hostel
CurrentCGPA
Member Function(behavior):
addDetails);
updateDetails; update CGPAO; updateHostelO; displaydetails;
*/
#include <iostream>
using namespace std;
struct Student
{
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;
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
    void updateDetails()
    {
        cout << "Enter new Name: ";
        cin >> Name;
        cout << "Enter new Roll No: ";
        cin >> RollNo;
        cout << "Enter new Degree: ";
        cin >> Degree;
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