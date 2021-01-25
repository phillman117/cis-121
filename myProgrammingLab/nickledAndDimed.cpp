//Nickled and Dimed Extra Credit Project
//created by Patrick Hillman 1/25/2021
#include<iostream>

int main () {

    int numQuarters, numNickles, numDimes;
    int quarterValue=25, nickelValue=5, dimeValue=10;
    double totalWorth;

    std::cout << "Enter number of quarters, then dims, then nickels: ";
    std::cin >> numQuarters >> numDimes >> numNickles;

    totalWorth = (numQuarters * quarterValue) + (numNickles * nickelValue) + (numDimes * dimeValue);

    std::cout << totalWorth << "\n";

    return 0;

}