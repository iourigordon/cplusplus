#include <iostream>

#include "structSample.h"

using namespace std;

int main(int argc, char* argv[])
{

	TestStruct sTest(10);

	cout << "sTest has int value of " << sTest.getInt() << endl;
	sTest.setInt(5);
	cout << "sTest has int value of " << sTest.getInt() << endl;
	return 0;
}
