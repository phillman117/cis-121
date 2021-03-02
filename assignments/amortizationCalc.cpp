// ECC CIS-121 Spring 2021
// Section Number: 702
// Author: Patrick Hillman
// Due Date: 2 March 2021
// Program Name: amortizationCalc.cpp
//
// Purpose of Program:
//	 Calculate and produce an amortization schedule based on user input.
//
// Algorithm:
//	1.	Loop program until user quits
//  2.	Query Loan amount
//  3.  Query Loan length
//  4.  Query Interest rate
//  5.  Calculate monthly rate
//      a.rate/12
//  6.  Calculate number of payments
//        a.Loan length * 12
//  7.  Calculate term
//      a.pow((1 + monthlyRate),number of payments)
//  8.  Print Table Headers
//      a.Payment#  Payment   Interest Paid   Principal Paid  Balance
//  9.  Create loop to calculate amortization until end of Loan length
//      a. Calculate monthly payment:
//          i.(term*amount*monthlyRate)/(term-1)
//      b. Calculate interest paid:
//          i.(monthlyRate*balance)
//      c. Calculate principle paid:
//          i.payment - (monthlyRate*balance)
//      d. Calculate Balance
//          i.loan amount - principal
//      e. Print row with calculations
//  10. Ask if user wishes to repeat program
//  11. end program

#include <iostream>
using namespace::std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Variables to hold user input
    double loanAmount, interestRate;
    int loanLength;
    char repeat;

    //variables to hold calculations
    double monthlyRate,
        numOfPayments, 
        term, 
        monthlyPayment, 
        interestPaid, 
        principlePaid,
        totalPayment = 0,
        totalInterest = 0, 
        balance;

    //start program
    cout << "\n\tAmortization Calculator\n\n"
        << "\tBy Patrick Hillman\n\n\n"
        << "This program will print an amortization schedule\n"
        << "based on your loan amount, interest rate and loan length.\n"
        << endl;

    //start loop to repeat schedule if user desires
    do {
        cout << "\nPlease input loan amount: ";
        cin >> loanAmount;
        while(loanAmount <= 0){
            cout << "Invalid entry. Enter a positive, nonzero integer for loan amount: ";
            cin >> loanAmount;
        }
        cout << "Please input interest rate: ";
        cin >> interestRate;
        while(interestRate <= 0.0){
            cout << "Invalid entry. Enter a positive, nonzero integer for interest rate: ";
            cin >> interestRate;
        }
        cout << "Please input length of loan in years: ";
        cin >> loanLength;
        while(loanLength <= 0){
            cout << "Invalid entry. Enter a positive, nonzero integer for length of loan: ";
            cin >> loanLength;
        }
        cout << "Thank you, calculating amortazation now... \n\n"
            << "Loan Amount: " << loanAmount << "\n"
            << "Interest Rate: " << interestRate << "%\n"
            << "Length: " << loanLength << " years\n"  
            << "Payment# Monthly_Payment  Interest \t Principle  \t Balance \n"
            << "----------------------------------------------------------------\n";

        //Calculate semi-constants
        //I don't want to touch user input, so I create a balance variable to reduce the principle paid
        balance = loanAmount;
        //Calculate number of payments (12 months in a year)
        numOfPayments = loanLength*12;
        //Calculate the monthly interest rate
        monthlyRate = (interestRate/12)/100;
        //calculate term using the pow() function
        term = pow((1+monthlyRate), numOfPayments);
        //calculate monthly payment
        monthlyPayment = (term*loanAmount*monthlyRate) / (term-1);


        //Loop to calculate and output monthly payment info
        for(int i = 1; i <= numOfPayments; i++){
            interestPaid = (monthlyRate*balance);
            principlePaid = monthlyPayment - interestPaid;
            balance = balance - principlePaid;
            cout << i 
                << " \t " << monthlyPayment 
                << " \t " << interestPaid 
                //added two tabs to make the output more human readible
                << " \t\t " << principlePaid 
                << " \t " << balance 
                << "\n";
            //Incrementally calculate total paid and total interest paid:
            totalPayment = totalPayment + monthlyPayment;
            totalInterest = totalInterest + interestPaid;
            }
        
        //output total loan amount paid and total interest paid
        cout << "\n\nIn total, you paid $" << totalPayment << ", with $" << totalInterest
            << " of that being interest. \n";
        
        //zero out totals in case user runs program again
        totalInterest = 0;
        totalPayment = 0;
        
        //Ask to repeat program
        cout << "\nWould you like to run this program again on a different loan? (y or n): ";
        cin >> repeat;
    } while(repeat == 'Y' || repeat == 'y');

    cout << "\nThank you for using this program, goodbye!"
        << endl;

    return 0;
}