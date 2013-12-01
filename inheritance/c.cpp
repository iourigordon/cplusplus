#include <iostream>

#include "a.h"
#include "c.h"

using namespace std;

C::C()
{
	cout << "C constructor\n";
}

C::~C()
{
	cout << "C destructor\n";
}

void C::whoAmI()
{
	cout << "I am C\n";
}
