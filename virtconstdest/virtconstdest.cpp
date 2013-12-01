#include <stdlib.h>
#include <iostream>

using namespace std;

class Base
{
public:
    Base() {cout<<"Base Constructor"<<endl;}
    virtual ~Base() = 0;
};

class Derived: public Base
{
public:
    Derived() {cout<<"Base Constructor"<<endl;}
    ~Derived() {cout<<"Derived Destructor"<<endl;}
};

int main(int argc, char* argv[])
{
    Derived test;
    return 0;
}
