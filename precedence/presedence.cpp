#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 2;

	x = (x << 3) - x;
	cout << "x = " << x << endl; 

	while (!printf("Hello World\n")) {}

	
}
#if 0
int main (int argc, char* argv[])
{
	int x = 0;
	cout << "Initial x = " << x << endl;
	cout << "Output of cout << ++x : ";
	cout << ++x << endl;
	cout << "Output of cout << x++ : ";
	cout << x++ << endl;
	cout << "new x : " << x << endl;
	
	if (!(1==1||1==0))
		cout << "Shouldn't be here" << endl;
	else
		cout << "Correct" << endl;

	if (!(x++==3||1==0))
		cout << "Correct" << endl;
	else
		cout << "Shouldn't be here" << endl;

	if (++x==4||1==0)
		cout << "Correct" << endl;
	else
		cout << "Shouldn't be here" << endl;

	return 0;
}
#endif
