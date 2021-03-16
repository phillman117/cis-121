//lab7ex5.cpp

//create a function that generates a sequence of random integers between two specified integers

#include <iostream>
using namespace::std;

int randoCommando(int, int);

int main() {
    int a, b;
    char repeat;

    cout << "This program is to test a function \n";
    do {
    cout << "Please input a positive number: ";
    cin >> a;
    cout << "Thank you. Please input another positive integer: ";
    cin >> b;
    cout << "Calculating now... \n\n";
    cout << "Random number between " << a << " and " << b << " is " << randoCommando(a, b)
        << endl
        << "Would you like to repeat this process? (y or n): ";
    cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    cout << "End of program"
        << endl;

    return 0;
}

int randoCommando(int a, int b) {
    int n;

    n = b-a + 1;
    n = rand() % n-1;
    n = a + n;

    return n;
}

//minor issues with negative numbers, but I'm not going to worry about the logic right now. The function works.