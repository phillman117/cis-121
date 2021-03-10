//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-123 Spring 2021													//
//																									//
//	Type of Assignment:		Extra Credit														    //
//	Problem Number:			1																		//
//	Section Number			101																		//
//	Author:					Patrick Hillman														    //
//	Date Assigned:			Feb.1, 2021												        		//
//	File Name:				nicklesAndDimes.cpp						    							//
//																									//
//	Purpose of Program:																				//
//		This program calculates the total value of a given combination of coins.                    //
//																									//
//  Algorithm:																						//
//    1. Ask the user for the number of quarters, dimes and nickles they'd like to add together.    //
//    2. Compute the total value of the given combination.                                          //
//    3. Output the value of the combination that the user provided.                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include<iostream>
using namespace std;


int main () {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    int numQuarters, numNickles, numDimes;
    double quarterValue=.25, nickelValue=.05, dimeValue=.10;
    double totalWorth;

    std::cout << "Enter number of quarters, then dimes, then nickels: ";
    std::cin >> numQuarters >> numDimes >> numNickles;

    totalWorth = (numQuarters * quarterValue) + (numNickles * nickelValue) + (numDimes * dimeValue);

    std::cout << totalWorth << "\n";

    return 0;

}