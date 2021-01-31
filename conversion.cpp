#include <iostream>

using namespace std;

// asks the user for the input of feet and inches
int userInput()
{
    double feet;
    cout << "Enter the number of feet: " << endl;
    cin >> feet;
    cout << "Enter the number of inches: " << endl;
    int inches;
    cin >> inches;
    
    
    // calculates feet + inches into feet
    feet = (inches / 12) + feet;
    return feet;
}

double feetToMeters(double feet)
{
    // feet to meters
    double meters;
    meters = feet * 0.3048;
    return meters;
}

int metersToCentimeters(double meters)
{
    //convert meter to centimeters
    int FullMeters;
    FullMeters = meters;
    double remainingMeters;
    remainingMeters = meters - FullMeters;
    int centimeters;
    centimeters = remainingMeters * 100;
    return centimeters;
}

void output(float meters, float centimeters)
{
    int FullMeters;
    FullMeters = meters;
    // print out meters and centimeters
    cout << "Number of meters: " << FullMeters << endl;
    cout << "Number of centimeters: " << centimeters << endl;
}

int main()
{
    double inches;
    string continueProgram;

    continueProgram = " ";
    // checks whether exit was typed
    while (continueProgram != "exit")
    {
        // calls function userInput
        double feet;
        feet = userInput();
        double meters;
        meters = feetToMeters(feet);
        double centimeters;
        centimeters = metersToCentimeters(meters);
        output(meters, centimeters);

        cout << "Enter exit to quit enter continue to continue" << endl;
        cin >> continueProgram;
    }
    return 0;
}