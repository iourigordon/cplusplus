#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

#include "calculator.h"

int main(int argc, char* argv[])
{
	Calculator* cCalc = new Calculator();

	cout<<"cCalc value                = "<<cCalc<<endl;
	cout<<"cCalc first member address = "<<cCalc->getAddresOfFirstMember()<<endl;

	cCalc->addElementToMap("pi",3.1415926);
	cCalc->addElementToMap("e" ,2.7182818);

	cCalc->proccessInput();
	int errorCode =  cCalc->getNumErrors();
	delete cCalc;
	return errorCode;
}
