#include <iostream>

#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"

using namespace std;

D::D()
{
	cout << "D constructor\n";
}

D::~D()
{
	cout << "D destructor\n";
}

void D::whoAmI()
{
	cout << "I am D\n";
}
