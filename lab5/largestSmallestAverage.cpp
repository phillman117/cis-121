//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-121 Spring 2021													//
//																									//
//	Type of Assignment:	Lab 5			 															    //
//	Section Number: 702			 																		//
//	Author:	Patrick Hillman				 																		//
//	Date Assigned: 2/14/2021																		//
//	Project Name: Lab 5 Exercise 1	 																		//
//	File Name:  largestSmallestAverage.cpp												//
//																									//
//	Purpose of Program:																				//
//	To acquire 10 integers from the user and perform the following tests:
//		1. Determine whether each number is positive or negative
//		2. Count the number of positive and negative numbers
//		3. Calculate the sum of all of the numbers
//		4. Calculate the average of all the numbers
//		5. Determine which of the numbers is smallest and largest								//
//																									//
//																									//
//  Algorithm:																						//
//    1. Ask the user to input the 10 integers                                                      //
//    2. For each integer entered, determine if it's positive or negative							//
//			If greater then 0, add the positive counter by 1										//
//			Otherwise, increase the counter variable for nagetive numbers							//	
//    3. Find the largest and smallest numbers	(research the algorithm of max and min				//
//	  4. calculate the sum																			//
//    6. Compute the average																		//
//    7. Display the results																		//
//////////////////////////////////////////////////////////////////////////////////////////////////////

// Include Section
#include <iostream>
#include <cstdlib>
using namespace std;

// Main Program
int main()
{
	//Variable declaration
	int number,					//Holds the value that the user enters
		count,	 				//Holds how many numbers were entered
		posCount, 				//Holds the number of positive values entered
		negCount,		 	    //Holds the number of negative integers entered by the user
		largest,				//Holds the largest value in the entered numbers
		smallest,				//Holds the smallest value in the user's input numbers
	    sum;					//The sum of all the numbers
	double average;			 	//The average of all numbers
	 							
	//Initialize the count to zero
	count = 0;
	posCount = 0;
	negCount = 0;

	//Initialize the sum to 0
	sum = 0;

	// Output Identification
	cout << "Lab #5 by Patrick Hillman - "
		<< "Sum and Average\n\n";

	//Prompt the user to enter 10 integers
	cout << "Please enter a whole number: ";
	cin >> number;
	cout << endl;                                            

	//assignm  the first value to the largest and smallest
	largest = number;
	smallest = number;
	
	//determine if number is positive or negative
	if(number < 0)
		negCount++;
	else if (number >= 0)
		posCount++;
	
	//Add number to sum
	sum = sum + number;

	//update the count variable to 1 
	count++;


	//read the rest of 9 integers from the user  with a loop
	while (count < 10)
	{
		//Ask the user to enter a number 
		 cout << "Please enter another whole number: ";
		 cin >> number;
		 cout << endl;

		//Determine whether input is positive or negative
		if(number < 0)
			negCount++;
		else if(number >= 0)
			posCount++;
		 

		//Determine whether the input is now the largest or smallest integer of the set  
		if(number > largest)       
			largest = number;
		else if(number < smallest)
			smallest = number;

		//Calculates the sum of all the numbers
		sum = sum + number;

		//Update the counter
		count++;
	}

	//Calculate the average of all the numbers (
	average = sum / 1.00 / count;

	//Output the results of the calculations
	cout << "Of the numbers you've input, we've calculated the following: \n"
		<< "\t The largest number you've entered is " << largest << "\n"
		<< "\t The smallest number you've entered is " << smallest << "\n"
		<< "\t Number of positive numbers entered: " << posCount << "\n"
		<< "\t Number of negative numbers entered: " << negCount << "\n"
		<< "\t Sum of numbers entered: " << sum << "\n"
		<< "\t Average of numbers entered: " << average << "\n\n"
		<< "That is all. Thank you for using my program."
		<< endl;

	return 0;
}