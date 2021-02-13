// ticket.cpp - This program asks for an age and displays the cost of the ticket 
#include <iostream>
using namespace::std;

int main() {
    double age, ticket = 12;

    cout << "Please enter the age \n";
    cin >> age;
    if(age <=8 || age >= 65)
        ticket = 6;
    else
        ticket = 12;
    cout << "Your ticket costs " << ticket << endl;

    return 0;
}