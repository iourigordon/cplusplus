#include <iostream>

using namespace std;

class A
{
    int i;
};

class B
{
    virtual void func() {;}
};

int main(int argc, char* argv[])
{
    A a;
    B b;

    cout<<"Size no members A "<<sizeof(A)<<endl;
    cout<<"Size virtual destrucotr B "<<sizeof(B)<<endl;

    return 0;
}
