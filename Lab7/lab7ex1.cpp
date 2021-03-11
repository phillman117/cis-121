//experiement on Execut the program and explain wht the program does:

#include <iostream>
using namespace::std;
void rect_area(int, int);

int main()	
{	
	int x, y;	
	cout << "What is the length of the rectangle?\n";	
	cin >> x;	
	cout << "What is the width of the rectangle?\n";	
	cin >> y;	
	rect_area(x, y);
	return 0;	
}

void rect_area(int base, int height)	
{	
	int area;
	area = base * height;	
	cout << "The area of the rectangle is ";	
	cout << area << endl;	
}

//main gathers input from the user, then calls rect_area() to compute the data