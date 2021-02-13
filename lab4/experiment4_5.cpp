//experiment4_5.cpp
#include <iostream>
using namespace::std;

int main() {
    int x = 1,y = 1;

    y = x + x + x++;
    cout << y << endl;
    y = x++ +x + x;
    cout << y << endl;

    return 0;
}
