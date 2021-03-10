//experiment5_3.cpp

#include <iostream.h> 
using namespace std; 
int main( ) 
{ 
        int x,y,z, p, q, r;  // (A) 
        double average; 
        // prompt the user: 
        cout << "Enter six grades separated by spaces, then press <Enter>:" << endl; 
        // read and store six integers: 
        cin >> x >> y >> z >> p >> q >> r;  // (B) 
        average = (x + y + z + p + q + r)/6;  // (C) 
        cout << "The average is " << average << endl; 
        return 0; 
} 
