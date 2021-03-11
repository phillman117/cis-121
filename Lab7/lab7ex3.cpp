//lab7ex3.cpp
//prt1.execute the below prgram and record results

#include <iostream>
using namespace std;
void fun(int, int, int);	
int main()	
{	
	int a = 1, b = 2, c = 3;
	cout << "The values of a, b, and c ";	
	cout << "are: " << a << " " << b << " " << c << endl;	
	fun(a, b, c);
	return 0;	
}	

void fun(int c, int b, int a)	
{	
	cout << "The values of a, b, and c within the function ";	
	cout << "are: " << a << " " << b << " " << c << endl;	
}

//prt2. Based on the results, what is the rule for determining which 
//actual parameters are associated with which formal parameters?
//response: parameters are renamed by teh function and used acordingly
//to elaborate, in main() int a has been assigned 1. Main eventually passes
//a into fun() at the first position. fun() however, names the first position c.
//thus when fun outputs c, it will read the value passed into it at the position
//it initialized as variable c, which in this case is the number 1, because main
//passed a into fun() and a's value is 1 in main.
//To boil it down, functions 