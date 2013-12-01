#include <iostream>

#include "a.h"
#include "b.h"

using namespace std;

B::B()
{
	cout << "B constructor\n";
}

B::~B()
{
	cout << "B destructor\n";
}

void B::whoAmI()
{
	cout << "I am B\n";
}
