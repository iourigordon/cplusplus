#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    Base(string sName):m_sName(sName) {}
    virtual void Process() = 0;
protected:
    string m_sName;
};

class Derived : public Base
{
public:
    Derived(string sName):Base(sName) {}
private:
    void Process() {cout << " Derived " << m_sName;}
};

int main(int argc, char* argv[])
{
    Derived test("test");
    test.Process();
    return 0;
}
