// my first program in C++
#include <iostream>
using namespace std;

int main ()
{

	string sMyString = "This is a string";
	string sMyName;
	cout << "Your name is :";
	getline (cin,sMyName);
 	cout << "Hello " << sMyName << endl;
	cout << sMyString<<endl;
	return 0;
}
