// ECC CIS-121 Spring 2021
// Problem Number: Assignment three, problem one mathExam.cpp
// Section Number: 702
// Author: Patrick Hillman
// Due Date: 29 March 2021
// Program Name: mathExam.cpp
//
// Purpose of Program:
//	 This program challenges a student to answer multiplication and
//   division problems until they choose to end the program.
//
// Functions needed:
//  1. introExplanation()
//  2. generateExpression()
//  3. evaluateAnswer()
//  4. calculateScore()
//
// Algorithm:
// 1.	Welcome user to program
//      a.	Explain what * and / mean
//      b.	Indicate that -1 will exit exam
// 2.	Place reset checkpoint (If new exam is requested)
// 3.   Place checkpoint for question and answer evaluation loop
// 4.	Generate question for student:
//      a.	Determine * or / randomly
//          i.	questionType = Rand() % 2 + 1
//              if questionType > 5 then *
//              else if questionType < 5 && > 0 then /
//      b.	Deterimine integers for the expression (a * b = c or a / b = c)
//          i.	a = rand() % 10
//          ii.	b = rand() % 10
//          iii. If dividing
//              1.	If b == 0
//                  a.	b = b+1
//                  b.	We cannot divide by zero
//      c.	Determine answer to the expression
//          i.	c = a * b or c = a / b
//      d.	Output question to student	
//      e.	Receive input
//      f.  if input != -1
//          i. questionsAsked++
// 5.   If input != c
//      a.	incorrectAnswer++    
// 6.   Evaluate answer:
//      a.	Test input against c
//          i.	if input == c
//              1. output positive reinforcement (switch statement)
//          ii.	while input != c
//              1.	Output encouragement (use switch statement per requirements!), 
//              2.  ask for another response
//              3.  return to start of step 8
// 7.	Return to step 6 (Generate question)
// 8.  If input == -1, exit lop started in step 5 
// 9.	Calculate student’s score
//      a.	correctAnswers = questionsAsked – incorrectAnswer
//          i.	We will not be penalizing student for multiple incorrect answers on the same question.
//      b.	score = correctAnswers / questionsAsked
//      c.	if score >= .75
//          i.	output congrats
//      d.	else
//          i.	output recommendation to seek additional help
// 10.	Ask if another student wishes to use the program
//      a.	If yes, return to reset checkpoint (step 4)
//      b.	If no, thank user and exit

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace::std;

void introExplaination();
void generateExpression(float& a, float& b, int& c, float& studentAnswer, int& questionCounter, int& incorrectAnswerCounter);
void evaluateAnswer(float c, float& studentAnswer);
void calculateScore(int questionCounter, int incorrectAnswerCounter, int passingScore);

const float passingScore = 0.75;

int main(){
    //initialize variables for math question
    float a, b;
    //initialize vairable for answer to expression force whole number when dividing
    int c;
    //initialize counters
    int incorrectAnswerCounter, questionCounter;
    
    float studentAnswer;
    //program exit signal
    char newExam;
    //exam exit signal is -1

    //seed random
    srand(time(0));

    //start program
    cout << "\nAutomated Math Exam\n"
        <<"\tBy Patrick Hillman \n\n";
    
    //explain how the program works and its purpose
    introExplaination();

    do {
        //set counters to zero here so they reset for every exam
        incorrectAnswerCounter = 0;
        questionCounter = 0;
        do {
            //Generate question and receive student input
            generateExpression(a, b, c, studentAnswer, questionCounter, incorrectAnswerCounter);
            //Break out of exam if exit signal given
            if(studentAnswer == -1)
                break;
            //evaluate response, if incorrect have the student correct their mistake
            evaluateAnswer(c, studentAnswer);

        } while(studentAnswer != -1);

    //calculate score    
    cout << "\nQuestions asked = " << questionCounter << endl;
    cout << "Incorrect answers given = " << incorrectAnswerCounter << endl;
    calculateScore(questionCounter, incorrectAnswerCounter, passingScore);
    
    //ask if user wishes to repeat the exam
    cout << "Would you like to take another exam? (y or n)";
    cin >> newExam;
    cout << endl;

    } while(newExam == 'y' || newExam == 'Y');

    cout << "Thank you for using this program!"
        << endl;



    return 0;
}

void introExplaination(){

    cout << "This program is intended to test your knowlege of multiplication and division\n"
        <<"The structure of the problems is as follows:\n"
        <<"\t What is 5 * 6?\n"
        <<"\t[type your answer here and press enter]\n"
        <<"\t What is 6 / 2?\n"
        <<"\t[type your answer here and press enter]\n\n"
        <<"This pattern will continue until you enter -1 as an answer.\n"
        <<"-1 will signal to the program that you've had enough and wish to stop the exam.\n"
        <<"Take note that the astrisk (*) indicates a multiplication question, and a front slash (/) indicates a division question\n"
        <<"Round answers to the nearest whole number, and don't include remainders\n\n"
        <<"Lets begin!\n"
        << endl;

}

void generateExpression(float& a, float& b, int& c, float& studentAnswer, int& questionCounter, int& incorrectAnswerCounter) {
    
    //assign values to variables
    int questionType = rand() % 10 + 1;
    a = rand() % 10;
    b = rand() % 10;

    //ask multiplication question
    if(questionType > 5){

        c = a*b;
        cout << "What is " << a << " * " << b << "?\n";
        cin >> studentAnswer;
    }
    //ask division question
    else if(questionType < 5 && questionType >= 0){
        //ensure b is not equal to zero
        if(b == 0)
            b++;

        c = round(a/b);
        cout << "What is " << a << " / " << b << "?\n";
        cin >> studentAnswer;
    }
    //Only count question if exit signal is not given
    if(studentAnswer != -1){
        questionCounter++;
        //Count incorrect answer (only once per question)
        if(studentAnswer != c)
            incorrectAnswerCounter++;
    }

}

void evaluateAnswer(float c, float& studentAnswer) {

    int responseGenerator;

    do {
        if(studentAnswer == c){
            responseGenerator = rand() % 4;
        }
        //else if(studentAnswer == -1)
        //    break;
        else{
            responseGenerator = rand() % 4 + 4;
        }

        switch(responseGenerator){

            //Positive reinforcement
            case 0:
                cout << "Excellent job!\n";
                break;
            case 1:
                cout << "Woohoo, you got it right!\n";
                break;
            case 2:
                cout << "Very good!\n";
                break;
            case 3:
                cout << "Correct, keep it up!\n";
                break;

            //Encouragement
            case 4:
                cout << "No, please try again\n";
                cin >> studentAnswer;
                break;
            case 5:
                cout << "Wrong, try once more, you can do it\n";
                cin >> studentAnswer;
                break;
            case 6:
                cout << "Don't give up!\n";
                cin >> studentAnswer;
                break;
            case 7:
                cout << "Incorrect, keep trying!\n";
                cin >> studentAnswer;
                break;
            default:
                cout << "Error, please restart program (ctrl+c)";
                break;
        }
    } while(responseGenerator >= 4);
}

void calculateScore(int questionCounter, int incorrectAnswerCounter, int passingScore) {

    int correctAnswers = questionCounter - incorrectAnswerCounter;
    float score = correctAnswers * 1.0 / questionCounter;

    cout << "Your score is " << score << "\n";

    if(score < passingScore)
        cout << "Sorry, you need a score of .75 or higher. Please study and try again.\n";
    else
       cout << "You've passed the test, great job! Keep up the good work!\n";

}