//lab7ex6.cpp
//step one: execute the following code and record results:
/*
#include <iostream>
using namespace std;
int fun(int);
int main()	
{
	int k = 1;
	cout << "The value returned is " << fun(k++) << endl;
	return 0;
}
int fun(int x)	
{	
	cout << "The value within the function is " << x << endl;	
	return (x++);	
}
*/
//step two: run the following and record the results
#include <iostream>
using namespace std;
int fun(int);
int main()	
{	
	int k = 1;	
	cout << "The value returned is " << fun(++k) << endl;
	return 0;
}
int fun(int x)
{	
	cout << "The value within the function is " << x << endl;
	return (++x);	
}


//response: The difference between the two is obvious when ran, the reason why they are different
//though is because the incremental operation (++) is in the suffix of step one, but in the prefix
//of step two. The (++) operator is very dependent upon placement.