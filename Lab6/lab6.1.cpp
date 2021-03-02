//lab 6 experiement 1

#include<iostream>
using namespace::std;

int main() {
    //finding the largest value, smallest value, and the sum of 10 integers provided by the user
    //define variables for our calculations/identification
    int largest, smallest, userInteger;
    int sum = 0;
    char repeat;
    
    //start program
    cout << "Largest, Smallest and Sum Program\n"
        << "\t By Patrick Hillman\n"
        << "\n"
        << "Please enter ten integers, and this program will ID \n"
        << "the largest and smallest integers you've input, as well \n"
        << "as calculate the sum." << endl;
    
    cout << "Please enter an integer here: ";
    cin >> userInteger;

    //initialize variables with user input
    largest = userInteger;
    smallest = userInteger;
    sum = sum + userInteger;

    //start loop to ask user for 9 more integers
    for(int i = 0; i < 9; i++){
    cout << "Please enter an integer here: ";
    cin >> userInteger;

        //Determine if the user integer is larger or smaller than any prior integer:
        if(userInteger > largest)
            largest = userInteger;
        else if(userInteger < smallest)
            smallest = userInteger;
        
        //Calculate sum
        sum = sum + userInteger;
    }

    //output results
    cout << "\n"
        << "Thank you for your input. The calculations are as follows: \n"
        << "\tThe Largest integer you entered was: " << largest << "\n"
        << "\tThe Smallest integer you entered was: " << smallest << "\n"
        << "\tThe Sum of your inputs is: " << sum << "\n"
        << "Would you like to repeat the program?\n";
    cin >> repeat;

    //repeat program as many times as user wants to
    while(repeat == 'y') {
    cout << "Please enter an integer here: ";
    cin >> userInteger;
    
    //re-initialize variables with user input
    largest = userInteger;
    smallest = userInteger;
    sum = 0 + userInteger;

    //start loop to ask user for 9 more integers
    for(int i = 0; i < 9; i++){
        
        cout << "Please enter an integer here: ";
        cin >> userInteger;

        //Determine if the user integer is larger or smaller than any prior integer:
        if(userInteger > largest)
            largest = userInteger;
        else if(userInteger < smallest)
            smallest = userInteger;
        
        //Calculate sum
        sum = sum + userInteger;
    }
    cout << "\n"
        << "Thank you for your input. The calculations are as follows: \n"
        << "\tThe Largest integer you entered was: " << largest << "\n"
        << "\tThe Smallest integer you entered was: " << smallest << "\n"
        << "\tThe Sum of your inputs is: " << sum << "\n"
        << "Would you like to repeat the program?\n";
    cin >> repeat;
    }
    cout << "Program terminated" << endl;

    return 0;
}