#include <stdlib.h>

#include <iostream>
#include <string>

#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"

using namespace std;

void printObjectState(const string& sObjName, int iState)
{
    string sState;
    
    switch(iState)
    {
    case CONSTRUCTED:
        sState = "CONSTRUCTED";
        break;
    case INITIALIZED:
        sState = "INITIALIZED";
        break;
    case MODIFIED:
        sState = "MODIFIED";
        break;
    case DESTROYED:
        sState = "DESTROYED";
        break;
    default:
        sState = "Unknown";
    }
    cout << sObjName << " in state " << sState << endl;
}

int main(int argc, char* argv[])
{
	D derived;
	B* ptrDerivedB;
	C* ptrDerivedC;
	
	D* temp = new D();

	ptrDerivedB = &derived;
	ptrDerivedC = &derived;

	derived.whoAmI();
	ptrDerivedB->whoAmI();
	ptrDerivedC->whoAmI();

	ptrDerivedB->init();
	printObjectState(string("Derived through B*"),ptrDerivedB->getState());
	printObjectState(string("Derived through C*"),ptrDerivedC->getState());

	ptrDerivedC->modify();
	printObjectState(string("Derived through B*"),ptrDerivedB->getState());
	printObjectState(string("Derived through C*"),ptrDerivedC->getState());

	ptrDerivedC = (C*)temp;
	cout << "Deleting C\n";
	delete ptrDerivedC;
	cout << "Done Deleting C\n";
}
