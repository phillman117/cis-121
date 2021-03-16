// ECC CIS-121 Spring 2021
// Problem Number: Lab Seven, Exercise two fibonacciNumber.cpp
// Section Number: 702
// Author: Patrick Hillman
// Due Date: 7 March 2021
// Program Name: fibonacciNumber.cpp
//
// Purpose of Program:
//	 This program asks the user to enter an integer and then calls a function
//  that prints the nth Fibonacci number, where n is the number entered in by the user.
//
// Algothrim:
//	1.	Loop program until user quits
//  2.	Prompt user for the nth number ('n') of the Fibonacci sequence
//  3.	Send input to fibonacciFinder()
//      a.declare int fibonacciNumber = 0 to use for calculations and to return to main()
//      b.fibonacciFinder assigns 'n' as the terminator for a for loop
//      c.for loop checks if fibonacciNumber == 0, then adds one to it, triggering one iteration
//      d.on subsequent iterations, the for loop adds the fibonacci number to itself once per iteration
//      e.once the for loop iterates 'n' times, return fibonacci to main()
//  4.	Print out the result of the calculation
//  5.	Repeat program if the user chooses to

#include <iostream>
using namespace::std;

//Function prototype
double fibonacciFinder(int);

int main() {
    //declare variables to accept user input and store result of fibonacciFinder()
    double n, fibonacciNumber;
    char repeat;

    //Begin program
    cout << "\n\n\tFibonacci Finder\n"
        << "\tBy\n"
        << "\tPatrick Hillman\n\n"
        << "This program will find the number of the nth place in the Fibonacci sequence\n"
        << "based on your input.\n\n";
    
    //Repeat point
    do {
        
        //Gather n from user
        cout << "What place would you like to iterate to?\n";
        cin >> n;

        //Check if n is actionable
        while (n <= 0) {
            cout << "\nI'm sorry, but I'll need you to input a positive integer higher than \n"
                << "zero. Please input what place you'd like to iterate to in the Fibonacci Sequence: ";
            cin >> n;
        }
        cout << "Thank you\n";

        //calculate fibonacciNumber
        fibonacciNumber = fibonacciFinder(n);

        //display result
        cout << "The number of the Fibonacci sequence you're looking for (iteration number " << n << ") is: "
            << fibonacciNumber
            << "\n\n"
            //Ask to run again
            << "Would you like to repeat the program? (Y or N): ";
        cin >> repeat;
        cout << endl;
    } while (repeat == 'Y' || repeat == 'y');

    cout << "That completes the program.\n"
        << "Thanks for using it, goodbye!\n"
        << endl;

        return 0;
}

double fibonacciFinder(int n) {
    //declare double to hold our finding and our summand
    double fibonacciNumber = 0, summand;

    //for loop to find which number in the sequence to find
    for(int i = 1; i < n; i++) {
        if(i <= 2){
            fibonacciNumber = 1;
            summand = 1;
        }
        //basic algorithm is to add the current number to the number that came
        //before it (0, 1, 1, 2, 3, 5) all follow the pattern:
        //actual + previous actual
        //actual = Fibonacci number
        //previous actual = summand
        else {
            fibonacciNumber = fibonacciNumber+summand;
            summand = fibonacciNumber-summand;
        }
    }
    return fibonacciNumber;
};