//lab8ex2.cpp

//The const Type

#include <iostream>
using namespace std;

void test_const();

int main(){
    const float PI = 3.1415;
    
    cout << "The value of PI is " << PI << endl;
    test_const();
    PI = 3.124592;
    cout << "The value of PI is " << PI << endl;
    
    return 0;
}

void test_const(){
    const float PI = 3.1415;
    
    cout << "The value of PI is " << PI << endl;
}

//When we try to reassign 'PI' it draws an error from the compiler
//as we've indicated that 'PI' should be constant, meaning unchanging.

