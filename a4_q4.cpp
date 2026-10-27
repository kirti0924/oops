/*
Hierarchical Inheritance
Create a base class Vehicle containing:
    brand
    model
Create two derived classes:
Car — number_of_doors
Bike — engine_capacity
*/
#include<iostream>
using namespace std;
class vechile
{
    public:
      string brand;
      string model;
      void display()
      {
        cout<<"brand is> "<<brand<<endl;
        cout<<"model is> "<<model<<endl;
      }
};
class car : public vechile
{
    public:
      int no_of_door;
      void display_car()
      {
        cout<<"no_of_door> "<<no_of_door<<endl;
      }
};
class bike : public vechile
{
    public:
      int engine_capacity;
      void display_bike()
      {
        cout << "engine_capacity > " << engine_capacity << endl;
      }
};
int main()
{
    car c1;
    c1.brand="kia";
    c1.model="xyz";
    c1.display();
    c1.display_car();
    bike b1;
    b1.brand="pqe";
    b1.model="mno";
    b1.display();
    b1.display_bike();
    return 0;
}