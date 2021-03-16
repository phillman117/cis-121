//lab8ex3.cpp

//Call-by-reference

//A function CANNOT return more than one value using the return statement, 
//but can use the call-by-reference to update many values

// This program contains errors.
/* 
#include <iostream>
using namespace std;

void swap(int num1, int num2);

int main(){
    int x = 5, y = 6;
    
    cout << "x = " << x << " and y = " << y << endl;
    swap();
    cout << "x = " << x << " and y = " << y << endl;
    
    return 0;
}

void swap(int num1, int num2){
    int temp;
    
    temp = num1;
    num1 = num2;
    num2 = temp;

}
*/

//It looks like the program above doesn't send any inputs to swap()
//Error from compiler: note: candidate function not viable: requires 2 arguments, but 0 were
//provided 
//  void swap(int num1, int num2);
//       ^

//To fix the program, I will first set the arguments to call-by-reference
//by putting & next to their name, then I will send variables to the function

#include <iostream>
using namespace std;

void swap(int& num1, int& num2);

int main(){
    int x, y;

    cout << "Please input two integers, and this program will swap them: ";
    cin >> x >> y;
    
    cout << "x = " << x << " and y = " << y << endl;
    swap(x, y);
    cout << "x = " << x << " and y = " << y << endl;
    
    return 0;
}

void swap(int& num1, int& num2){
    int temp;
    
    temp = num1;
    num1 = num2;
    num2 = temp;

}

//program fixed!
//Additional modification made: request input from user