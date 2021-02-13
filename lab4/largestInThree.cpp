//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-123 Spring 2021													//
//																									//
//	Type of Assignment:		Lab 4 																    //
//	Problem Number:			1																		//
//	Section Number			101																		//
//	Author:					Patrick Hillman														    //
//	Date Assigned:			Feb.8, 2021												        		//
//	File Name:				largestInThree.cpp											            //
//																									//
//	Purpose of Program:																				//
//		This program determines the following based on integers gathered from user input:           //
//      1. First integer entered is tested to see if it is:                                         //
//          a. Even or odd                                                                          //
//          b. Positive or negative                                                                 //
//          c. Divisable by 3 AND 4, and 3 OR 4 but NOT 3 AND 4                             //
//      2. Second integer entered is tested against the following:                                  //
//          a. Is the first integer divisible by the second                                         //
//          b. Outputs the remainder of the two numbers                                             //
//          c. Compares the two integers, and displays them in ascending order                      //
//      3. Third integer entered is used for the following:                                         //
//          a. Calculate the average of the three integers                                          //
//          b. Output the larges number among three values                                          //
//          c. Display the three numbers in ascending order                                         //
//																									//
//  Algorithm:																						//
//    1. Prompt user for first integer (a)                                                          //
//      a. determine if it is even or odd by checking if it is divisable by 2                       //
//      b. determine if it is positive or negative by checking if a < 0                             //
//      c. use % to check if a is divisable by 3 or 4                                               //
//          i. Check if 3 OR 4 works                                                                //
//              * If so, check if 3 AND 4 work, then print results                                  //
//              * If not, print resutls                                                             //
//      d. Output the results of 1.a 1.b 1.c                                                        //
//    2. Prompt user for second integer (b).                                                        //
//      a. Check if number is == 0, if so skip steps b and c                                        //
//      b. Determine if int a is divisable by int b (use %) - True or False                         //
//      c. Output the remainder of int a and int b                                                  //
//      d. Output numbers in ascending order                                                        //
//    3. Prompt user for third integer (c)                                                          //
//      a. Calculate the average of the three integers                                              //
//      b. Output the largest number among int a, b and c                                           //
//          i. if a is largest, check b against c to output numbers in ascending order              //
//          ii. if b is largest, check a against c to output numbers in ascending order             //
//          iii. if c is largest, check a against b to output numbers in ascending order            //                                             //
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace::std;

int main() {
    //initiallize variables for user input
    int a, b, c;
    //initiallize variables for calculations
    double average;
    int remainder;

    //Begin int a calculations
    cout << "Please enter an integer: ";
    cin >> a;
    cout << "Thank you" << endl;

    //check if a is even or odd
    if(a % 2 == 0)
        cout << "This integer is even" << endl;
    else
        cout << "This integer is odd" << endl;
    //check if a is positive or negative
    if(a < 0)
        cout << "This integer is negative" << endl;
    else if(a > 0)
        cout << "This integer is positive" << endl;
    else
        cout << "This integer is zero" << endl;
    //check a against divisors 3 and 4; first 3 OR 4, second 3
    if(a % 3 == 0 || a % 4 == 0) {
        if(a % 3 == 0 && a % 4 == 0)
            cout << "This integer is divisable by 3 AND 4" << endl;
        else
            cout << "This integer is divisable by 3 OR 4, but not both" << endl;
    }
    else
        cout << "This integer is niether divisable by 3 nor 4" << endl;
    
    //Begin int b calculations
    cout << "Please enter a second integer: ";
    cin >> b;
    cout << "Thank you" << endl;

    //check if b is zero
    if(b != 0) {
        //check if a is divisible by b
        if(a % b != 0){
            remainder = (a % b);
            cout << a << " is NOT divisible by " << b << endl;
            //output remainder
            cout << a << " divided by " << b << " leaves a remainder of " << remainder << endl;
        }
        else
            cout << a << " is divisible by " << b << " (remainder 0)" << endl;
    }
    else
        cout << "Unable to process zero as a divisor" << endl;
    //output a and b in ascending order
    if(a > b)
        cout << b << " " << a << endl;
    else
        cout << a << " " << b << endl;
    
    //begin int c calculations
    cout << "Please enter the final integer: ";
    cin >> c;
    cout << "Thank you" << endl;

    //calculate average
    average = (a + b + c)*1.0 / 3;
    cout << "The average value of the three numbers input is " << average << endl;
    //Output largest of the three values
    //If int a is the largest:
    if(a > b && a > c){
        cout << a << " is the largest of the three values you've entered" << endl;
        //display values in ascending order
        if(b > c) 
            cout << c << " " << b << " " << a << endl;
        else
            cout << b << " " << c << " " << a << endl;
    }
    //If b is the largest:
    else if(b > a && b > c) {
        cout << b << " is the largest of the three values you've entered" << endl;
        //display values in ascending order
        if(a > c)
            cout << c << " " << a << " " << b << endl;
        else
            cout << a << " " << c << " " << b << endl;
    }
    //If int c is the largest:
    else {
        cout << c << " is the largest of the three values you've entered" << endl;
        //display values in ascending order
        if(a > b)
            cout << b << " " << a << " " << c << endl;
        else 
            cout << a << " " << b << " " << c << endl;
    };
    return 0;
}