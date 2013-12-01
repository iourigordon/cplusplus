#include <iostream>

#include "a.h"

using namespace std;

A::A()
{
	cout << "A constructor\n";
	m_eState = CONSTRUCTED;
}

A::~A()
{
	cout << "A destructor\n";
	m_eState = DESTROYED;
}

void A::init()
{
	m_eState = INITIALIZED;
}

void A::modify()
{
	m_eState = MODIFIED;
}

int A::getState()
{
	return m_eState;
}

void A::whoAmI()
{
	cout << "I am A\n";
}
