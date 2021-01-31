
#include <iostream>
using namespace std;
// Create function  to calcuates the cost + tax
float addTax(float taxRate, float cost)
{
    return (cost * taxRate) + cost;
}

int main()
{
    //Get cost from user
    float cost;
    cout << "Enter the cost: ";
    cin >> cost;

    //Get tax rate from user
    float taxRate;
    cout << "Enter the current tax rate: ";
    cin >> taxRate;

    // prints cost after tax

    cout << "Cost after tax: " << addTax(taxRate, cost) << endl;
}