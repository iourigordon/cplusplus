#include <iostream>

using namespace std;

class A
{
public:
    void run() {cout<<"A run"<<endl;}
};

class B
{
public:
    void run() {cout<<"B run"<<endl;}
};

class C : public A,B
{
public:
    void testAScope() {A::run();}
    void testBScope() {B::run();}
};

int main (int argc, char* argv[])
{
    C test;
    test.testAScope();
    test.testBScope();
    return 0;
}
