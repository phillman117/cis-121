//Temperature Conversion Program
//By Patrick Hillman
//CIS-121
//1-29-2021

#include<iostream>

using namespace std;

int main() {
    
    double degreeCelsius, degreeFahrenheit, degreeRankine;

    cout << "Temperature Conversion Program\n"
        << "\n"
        << "\n"
        << "The Rankine scale is similar to the Kelvin scale,\n"
        << "but instead of using Celsius as the baseline temperature measurment, \n"
        << "like Kelvin, Rankine uses Fahrenheit. \n"
        << "\n"
        << "Instead of having to make two conversions (Celsius to Fahrenheit, \n"
        << "then Fahrenheit to Rankine), you can use this program to convert \n"
        << "Celsius into degrees Rankine, all in one go!\n"
        << "\n"
        << "\n"
        << "Please input a temperature in degrees Celsius (decimals are okay): ";
    cin >> degreeCelsius;
    cout << "\n"
        << "Thank you! One moment while we make the conversion...\n";

        degreeFahrenheit = degreeCelsius * (9.0/5.0) + 32;
        degreeRankine = degreeFahrenheit + 459.67;

    cout << "Thank you for waiting! I've made the following conversions\n"
        << "to the temperature you've input, which was " << degreeCelsius << "\n"
        << "Degrees Fahrenheit: " << degreeFahrenheit << "\n"
        << "Degrees Rankine: " << degreeRankine << "\n"
        << "\n"
        << "Thank you for using this program, have a good day!";

    return 0;
}