// ECC CIS-121 Spring 2021
// Problem Number: Lab Eight, Exercise two rockPaperScissors.cpp
// Section Number: 702
// Author: Patrick Hillman
// Due Date: 14 March 2021
// Program Name: rockPaperScissors.cpp
//
// Purpose of Program:
//	 This program asks the user to pick Rock, Paper, or Scissors, then the computer
//   randomly generates a response and determines if the player has beaten it
//
// Functions needed:
//  1. getUserChoice()
//  2. getComputerChoice()
//  3. determineWinner()
//  4. displayChoice()
//
// Algothrim:
//	1.	Loop program until user quits
//  2.	Display game menu with getUserChoice()
//  3.  Prompt user to select one of four options:
//      a.Rock
//      b.Paper
//      c.Scissors
//      d.Quit
//  4.  Send user choice back to main()
//  5.  Determine computer choice randomly getComputerChoice()
//      a.(rand() % 3) + 1
//  6.  Send computer choice back to main()
//  7.  Send computer choice and user choice to displayChoice()
//      a. Output choices
//  8.  Send computer choice and user choice to determineWinner()
//      a. if(user == rock) {
    //          if(computer == paper)
    //              "Paper covers rock! You lose!"
    //          else if(computer == scissors)
//                  "Rock smashes scissors! You win!"
//              else
//                  "It's a tie!"
//          }
//          else if(user == paper){
    //          if(computer == scissors)
    //              "Scissors cut paper! You lose!"
    //          else if(computer == rock)
    //              "Paper covers rock! You win!"
    //          else
    //              "It's a tie!"
//          }
//          else if(user == scissors) {
    //          if(computer == rock)
    //              "Rock smashes scissors! You lose!"
    //          else if(computer == paper)
    //              "Scissors cut paper! You win!"
    //          else
    //              "It's a tie!"
//          }
//  9. return to top of do while loop. Exit program only if opt 4 is selected from getUserCHoice()
// 10. Thank user and exit program

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace::std;

void getUserChoice(int& userChoice);
void getComputerChoice(int& computerChoice);
void displayChoice(int userChoice, int computerChoice);
void determineWinner(int userChoice, int computerChoice);

int main() {
    //initialize variables to hold user choice and computer choice
    int userChoice, computerChoice;
    //Seed random number for compute choice
    srand(time(0));
    
    //start program
    cout << "Rock, Paper, Scissors Simulator \n\n"
        << "\t By Patrick Hillman \n\n"
        << "Select an option from the Game Menu\n";

    do {
        //Display game menu
        getUserChoice(userChoice);
        if(userChoice == 4)
            break;
        
        //Generate computer choice
        getComputerChoice(computerChoice);

        //Display Choices
        displayChoice(userChoice, computerChoice);

        //Determine winner
        determineWinner(userChoice, computerChoice);

    } while(userChoice != 4);

    cout << "\nThank you for playing!"
        << endl;

    return 0;
}

void getUserChoice(int& userChoice) {
    
    cout << "Game Menu \n"
        << "---------\n"
        << "1) Rock \n"
        << "2) Paper \n"
        << "3) Scissors \n"
        << "4) Quit \n";
    cin >> userChoice;

    //verify input is viable
    while(userChoice < 1 || userChoice > 4) {
        cout << "Invalid input, please select option 1, 2, 3, or 4: \n";
        cin >> userChoice;
    }  

}

void getComputerChoice(int& computerChoice) {
    
    computerChoice = (rand() % 3) + 1;

}

void displayChoice(int userChoice, int computerChoice) {

    //Display user's choice
    cout << "Your choice is ";
    if(userChoice == 1)
        cout << "Rock!\n";
    else if(userChoice == 2)
        cout << "Paper!\n";
    else if(userChoice == 3)
        cout << "Scissors!\n";

    //Display computer's chioce
    cout << "The computer's choice is ";
    if(computerChoice == 1)
        cout << "Rock!\n";
    else if(computerChoice == 2)
        cout << "Paper!\n";
    else if(computerChoice == 3)
        cout << "Scissors!\n";
    
    cout << "\n";

}

void determineWinner(int userChoice, int computerChoice) {

    //If user picks Rock
    if(userChoice == 1){
        //if comp picks Paper
        if(computerChoice == 2){
            cout << "Paper covers rock, you lose!"
                << endl;
        }
        //if comp picks Scissors
        else if(computerChoice == 3){
            cout << "Rock smashes scissors, you win!"
                << endl;
        }
        //If user and computer pick the same
        else{
        cout << "It's a tie!"
            << endl;
        }
    }
    //If user picks paper
    else if(userChoice == 2){
        //if comp pics rock
        if(computerChoice == 1){
            cout << "Paper covers rock, you win!"
                << endl;
        }
        //if comp picks scissors
        else if(computerChoice == 3){
            cout << "Scissors cut paper, you lose!"
                << endl;
        }
        //If user and computer pick the same
        else{
        cout << "It's a tie!"
            << endl;
        }
    }
    //If user picks scissors
    else if(userChoice == 3){
        //if computer picks rock
        if(computerChoice == 1){
            cout << "Rock smashes scissors, you lose!"
                << endl;
        }
        //if computer pics paper
        else if(computerChoice == 2){
            cout << "Scissors cut paper, you win!"
                << endl;
        }
        //If user and computer pick the same
        else{
        cout << "It's a tie!"
            << endl;
        }
    }

    cout << endl;
}