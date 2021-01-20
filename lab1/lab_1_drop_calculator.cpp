//  Created by Patrick Hillman on 1/19/21.
// lab_1
// Taco Cat Goat Cheese Pizza

#include <iostream>
using namespace std;
int main()
{
    double timeToFall, dropDistance;
    cout << "Please enter a time in seconds, then press the return key:\n";
    cin >> timeToFall;
    dropDistance = timeToFall*33;
    cout << "An object at rest would fall ";
    cout << dropDistance;
    cout << " feet in ";
    cout << timeToFall;
    cout << " seconds.\n";

    return 0;
}