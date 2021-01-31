#include <iostream>

using namespace std;
// Creates function that uses call by reference to assign variables to 0
void zeroBoth(int *var1, int *var2)
{
    *var1 = 0;
    *var2 = 0;
}

int main(int argc, char **argv)
{
    int userNum1;
    int userNum2;
    // asks the user for two numbers
    cout << "Enter first number" << endl;
    cin >> userNum1;
    cout << "Enter second number" << endl;
    cin >> userNum2;
    zeroBoth(&userNum1, &userNum2);

    cout << userNum1 << " " << userNum2 << endl;

    return 0;
}