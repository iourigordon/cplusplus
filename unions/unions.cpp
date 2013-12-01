#include <iostream>

using namespace std;

class A
{
public:
    A() {cout<<"A constructor"<<endl;}
    ~A() {cout<<"A destuctor"<<endl;}
};

class B
{
public:
    B() {cout<<"B constructor"<<endl;}
    ~B() {cout<<"B destuctor"<<endl;}
};

union Test
{
    Test(Test& Rhs) {this->a = Rhs.a;}
    ~Test() {cout<<"Union destructor"<<endl;}
    static Test* getUnion() {return new Test();}
    void setValueA(int iVal) {a=iVal;}
    int getValueA() {return a;}

private:
    Test() {cout<<"Union constructor"<<endl;}
    int a;
    int b;
};

int main ()
{
    Test* testUnion = Test::getUnion();

    testUnion->setValueA(5);

    cout<<"Union: a value = "<<  testUnion->getValueA() <<endl;
    delete testUnion;
    return 0;
};
