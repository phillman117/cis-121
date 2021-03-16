//lab7ex2.cpp
// This program contains an error. 
//Response: The program does not prototype the functions used
#include <iostream>
using namespace std;

void beginning();
void ending();

int main()	
{	
	beginning();
	return 0;	
}
void beginning();	
void beginning()	
{	
	cout << "It was the best of times,\n";	
	cout << "it was the worst of times, ...\n";	
	ending();	
}
void ending();	
void ending()	
{	
	cout << "... it is a far, far better rest that I go to\n";	
	cout << "than I have ever known.\n";	
}
