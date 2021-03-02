// ECC CIS-121 Spring 2021
// Problem Number: Lab Six shapeCalculator.cpp
// Section Number: 702
// Author: Patrick Hillman
// Due Date: 28 February 2021
// Program Name: shapeCalculator.cpp
//
// Purpose of Program:
//	 This program gives the user an option to calculate the area of a rectangle, the
//	 area of a triangle, or the area of a circle.
//
// Algothrim:
//	1.	Loop program until user quits
//  2.	Display menu options
//  3.	Take user input for menu option
//  4.	Depending on option selected, calculate the area of a rectangle,
//	triangle, or circle based on user input
//  5.	Terminate program if user chooses correct option


// Include Section
#include <iostream>
using namespace std;

// Main Program
int main()
{
	// Constant Declarations
	const double PI = 3.14159;

	// Variable Declarations
	double base, height, radius, length, width;
	double area;
	int choice;
    char repeat;

	// Output Identification
	system("CLS");
	cout << "Lab 6 by Patrick Hillman - "
		<< "Geometry Calculator\n\n";

	// Program loop
	do
	{
		// Display the menu.
		// Prompt for user option input
        cout << "Please choose an option from below: \n"
            << "1 - Calculate area of a Rectangle \n"
            << "2 - Calculate area of a triangle\n"
            << "3 - Calculate area of a circle\n"
            << "4 - quit\n\n"
            << "Enter your choice (1-4): ";
        cin >> choice;
	 

		// Input validation. If the choice is not within 1 to 4, reenter
		while (!(choice >= 1) || !(choice <= 4))
		{
			cout << "Invalid input.  Please choose an option (1-4): ";
			cin >> choice;
		}

		// Switch statements
		switch (choice)
		{
		case 1:
            cout << "Calculate area of a Rectangle, got it!\n";
			// Prompt for user input of length
            cout << "Please enter the length of the rectangle: ";
            cin >> length;
 
			// Input validation
            while(length <= 0) {
                cout << "Invalid input. Please enter a positive number for the length: ";
                cin >> length;
            }

			// Prompt for user input of width
			 cout << "Please enter the width of the rectangle: ";
             cin >> width;

			// Input validation
			while(width <= 0) {
                cout << "Invalid input. Please enter a positive number for the width: ";
                cin >> width;
            }

			// Calculate area
            area = length*width;

			// Display results
			 cout << "The area of the rectangle is " << area << endl;
             break;

		case 2:
            cout << "Calculate the area of a triangle, got it!\n";
			// Prompt for user input of base
			 cout << "Input the base of the triangle: ";
             cin >> base;

			// Input validation
			while(base <= 0) {
                cout << "Invalid input. Please enter a positive number for the base: ";
                cin >> base;
            }

			// Prompt for user input of height
			cout << "Input the height of the triangle: ";
            cin >> height;

			// Input validation
			while(height <= 0) {
                cout << "Invalid input. Please enter a positive number for the height: ";
                cin >> height;
            }

			// Calculate area
			area = base * height * 0.5;

			// Display results
			cout << "The area of the triangle is " << area << endl;
            break;

		case 3:
            cout << "Calculate the area of a circle, got it!\n";
			// Prompt for user input of radius
			cout << "Please input the radius of the circle: ";
            cin >> radius;

			// Input validation
			while (radius <= 0) {
				cout << "Invalid input. Please enter a positive number for the radius: ";
                cin >> radius;
			}

			// Calculate area
            area = PI * (radius*radius);

			// Display results
			cout << "The area of the circle is " << area << endl;
            break;

        //end program
		default:
            cout << "Skipping calculations..." << endl;
		}
    cout << "Would you like to run the program again? (y/n)";
    cin >> repeat;
    cout << endl;
	} while (repeat == 'y' || repeat == 'Y');	

	cout << "\n\nProgram Terminated.\n" << endl;

	return 0;
}