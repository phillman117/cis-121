//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-123 Spring 2021													//
//																									//
//	Type of Assignment:		Lab 3 																    //
//	Problem Number:			1																		//
//	Section Number			101																		//
//	Author:					Patrick Hillman														    //
//	Date Assigned:			Feb.1, 2021												        		//
 //	File Name:				calStockCommission.cpp													//
//																									//
//	Purpose of Program:																				//
//		This program computes the volume of a cylinder of radius r and height h.                    //
//																									//
//  Algorithm:																						//
//    1. Ask the user for the how many shares were purchased,                                       //
//       and at what price they were purchased at.                                                  //
//    2. Compute the amount paid for the stock.                                                     //
//    3. Compute the commission (2% of transaction).				                                //
//	  3. Compute the total amount paid (stock + commission).                                        //
//    4. Output the amount paid for the stock, the commission,                                      //
//       and the sum total paid.                                                                    //
//////////////////////////////////////////////////////////////////////////////////////////////////////
 
 #include <iostream>
 using namespace std;

 const double commission = .02;


 int main () {

     // Declare variables
    double numShares, sharePrice, totalShareCost, commissionCost, totalPaid;

     //Acquire data from user
    cout << "Lab 3 - Part 3.2 \n"
         << "By Patrick Hillman \n"
         << endl
         << "Please enter the number of shares purchased: ";
    cin >> numShares;
    cout << "Thank you, now please enter at what price you bought the shares: ";
    cin >> sharePrice;
    cout << endl;

    //Calculate cost of stock purchase
    totalShareCost = numShares * sharePrice;
    //Calculate cost of commission
    commissionCost = totalShareCost * commission;
    //Calculate sumtotal cost of transaction
    totalPaid = totalShareCost + commissionCost;

    //Output results
    cout << "Purchasing " << numShares << " shares at $" << sharePrice << " per share\n"
         << "will incur the following costs: \n"
         << "Cost of shares: $" << totalShareCost << "\n"
         << "Cost of commission: $" << commissionCost << "\n"
         << "Total cost of transaction: $" << totalPaid
         << endl;

    //exit program
    return 0;  
 }