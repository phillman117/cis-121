//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-123 Spring 2021													//
//																									//
//	Type of Assignment:		Assignment 1														    //
//	Problem Number:			1																		//
//	Section Number			101																		//
//	Author:					Patrick Hillman														    //
//	Date Assigned:			Feb.8, 2021												        		//
//	File Name:				bmrCalc.cpp											                    //
//																									//
//	Purpose of Program:																				//
//		This program is intended to calculate the number of chocolate bars the user must consume    //
//      in order to maintain their weight without exercising based on the following information:    //
//      1. Basal Metabolic Rate (henceforth referred to as BMR)                                     //
//          a. Calculated using the Harris-Benedict equation                                        //
//          b. Variables of this equation take into account Weight, Height, Sex and Age             //
//      2. A typical chocolate bar holds 230 calories                                               //
//																									//
//  Algorithm:																						//
//    1. Prompt user for their weight in pounds                                                     //
//    2. Prompt user for their height in feet and inches                                            //
//    3. Prompt user for their age in years                                                         //
//    4. Prompt user for their sex                                                                  //
//    5. If their sex is male, use the following equation:                                          //
//          a. 66 + (6.3 * weight) + (12.9 * (feet*12 + inches)) - (6.8 * age)                      //
//    6. If their sex is female, use the following equation:                                        //
//          a. 655 + (4.3 * weight) + (4.7 * (feet*12 + inches)) - (4.7 * age)                      //
//    7. Divide the result of MBR by 230 (the number of calories provided by a chocolate bar)       //
//    8. Output the quotient of step 7 to the user as "Number of Chocolate Bars needed to maintain  //
//            healthy weight"                                                                       //
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cfloat>
using namespace::std;

std::cout << setprecision(2) << fixed << c;

int main() {
    double x, y;

    x = 100;
    y = x / 3;

    cout << y;

    return 0;
}
