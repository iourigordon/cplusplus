#include <iostream>

#include "structSample.h"

using namespace std;

TestStruct::_testStruct()
{
	a = 0;
}

TestStruct::_testStruct(int iArg)
{
	a = iArg;
}

TestStruct::~_testStruct()
{
	a = 0;
}

int TestStruct::getInt()
{
	return a;
}

void TestStruct::setInt(int iArg)
{
	a = iArg;
}
