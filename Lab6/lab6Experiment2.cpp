//lab6Experiment2.cpp
#include <iostream>
using namespace std;
int main()	
{	
	char sym;
    cout << "Enter a single character (a, b ,c, etc...): ";
	cin >> sym;	
	switch (sym)	
 {	
 		case 'a': cout << "The symbol is an a.\n"; break;	
 		case 'b': cout << "The symbol is a b.\n"; break;	
 		case 'c': cout << "The symbol is a c.\n"; break;	
 		default: cout << "The symbol is not a, b, or c.\n";
    }
	cout << "Switch statement completed.\n";
	return 0;	 
}
