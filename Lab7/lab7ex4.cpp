//lab7ex4.cpp
//complete the following program

#include <iostream>
using namespace std;
void rect_area(float, float, float);
int main()	
{	
	float width = 2.5, height = 3.1, area = 0.0;
	

	rect_area(width, height, area); //filling by calling rect_area() method 	
	cout << "The area in main is " << area << endl;	
	return 0;
}

void rect_area(float width, float height, float area)	
{	
	area = width * height;	
	cout << "The area in the function is " << area << endl;	
}


//summary of what happened. the area variable in main() was 
//not affected by the result of rect_area()