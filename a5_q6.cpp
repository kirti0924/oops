/*
Shopping Bill Generator
Create a class Bill with overloaded functions named calculateBillO to calculate:
• The bill for one item using quantity and unit price.
• The bill for two items using their quantities and prices.
• The bill for a bill amount after applying a discount percentage.
Use suitable parameter lists and return the final bill amount.
*/

#include <iostream>
using namespace std;
class Bill
{
    public:
    double calculateBill(int quantity, double price)
    {
        return quantity * price;
    }
    double calculateBill(int q1, double p1, int q2, double p2)
    {
        return (q1 * p1) + (q2 * p2);
    }
    double calculateBill(double amount, int discount)
    {
        return amount - (amount * discount / 100);
    }
};
int main()
{
    Bill b;
    cout << "Bill for one item: Rs. "<< b.calculateBill(2, 100.0) << endl;
    cout << "Bill for two items: Rs. "<< b.calculateBill(2, 100.0, 3, 50.0) << endl;
    cout << "Bill after 10% discount: Rs. "<< b.calculateBill(350.0, 10) << endl;
    return 0;
}
