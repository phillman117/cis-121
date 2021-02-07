//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-123 Spring 2021													//
//																									//
//	Type of Assignment:		Lab 3 																    //
//	Problem Number:			1																		//
//	Section Number			101																		//
//	Author:					Patrick Hillman														    //
//	Date Assigned:			Feb.1, 2021												        		//
//	File Name:				calCylinder.cpp													        //
//																									//
//	Purpose of Program:																				//
//		This program computes the volume of a cylinder of radius r and height h.                    //
//																									//
//  Algorithm:																						//
//    1. Ask the user for the the radius and height of the cylinder.                                //
//    2. Compute the area of the cylinder.                                                          //
//    3. Compute the volume of the cylinder.				                                        //
//	  3. Output the area and the volume.                                                            //
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
#include <iostream>
using namespace std;

const double PI = 3.141593;

int main()
{
    /*  Declare variables.  */
    double radius, height, area, volume;

    /*  Enter the radius and height of the cylinder.  */
    cout << "LAB 3 - Part 3.1 \n"
        << "By Patrick Hillman \n" 
        << endl;
    cout << "Please type the radius of the cylinder, then press the return key: ";
    cin >> radius;
    cout << "Thank you, now please enter the height of the cylinder: ";
    cin >> height;
    cout << endl;
 
    /*  Compute the area of the cylinder.  */
    area = (2*PI*radius*height) + (2*PI*(radius*radius));

    /*  Compute the volume of the cylinder.  */
    volume = PI*(radius*radius)*height;
    /*  Print the area and the volume.  */
    cout << "The surface area of a cylinder with a radius of "
        << radius << " and a height of " << height << " is: "
        << area << " Square meters (or m^2)\n" << endl;
    cout << "The volume of a cylinder with a radius of " << radius 
        << " and a height of " << height << " is: "
        << volume << " Cubic meters (or m^3)\n" << endl;
 
    /*  Exit program.  */
    return 0;
}

//Enter the radiusand the height of the cylinder : 5.12 6.8
//Thesurface area of a cylinder of radius 5.12 and height 6.8 is 383.465
//The volume of a cylinder of radius 5.12 and height 6.8 is 560.014
