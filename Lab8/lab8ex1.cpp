//lab8ex1.cpp

//Global vs. Local variables

/*
#include <iostream>
using namespace std;
void potato();
void advertisement();

int main(){
    char x;
    
    x = 'Z';
    
    cout << "x = " << x << endl;
    
    potato();
    
    cout << "x = " << x << endl;
    
    advertisement();
    
    cout << "x = " << x << endl;
    
    return 0;
}

void potato(){
    char x;
    
    x = 'H';
    
    cout << x << "ey ho, I'm from Idaho!\n";
}

void advertisement(){
    char x;
    
    x = 'Y';
    
    cout << x << "ou gotta taste it all!\n";
}
*/

//This is demonstrating how the variable 'x' can be used several times in a program
//depending on scope. in main(), x = 'Z', but when we call x in potato(), it isn't
//the same variable, but a different one, one that is limited to the potato() function's
//scope. Same goes for advertisment()

//The below program is a modified version of the one above

#include <iostream>
using namespace std;

void advertisement();
void potato();

int main(){
    char x;
    x = 'Z';
    
    cout << "x = " << x << endl;
    potato();
    cout << "x = " << x << endl;
    
    return 0;
}

void advertisement(){
    char x;
    x = 'Y';
    
    cout << x << "ou gotta taste it all!\n";
}

void potato(){
    char x;
    x = 'H';
    
    cout << x << "ey ho, I'm from Idaho!\n";
    advertisement();
}

//in this modified code, potato() calls advertisment(), so 'Hey ho...' and 'You gotta..'
//are printed in between two 'x = Z' strings. But again, the x that resides within
//advertisment() is different than the one in potato() or main(), so there is no
//conflict.