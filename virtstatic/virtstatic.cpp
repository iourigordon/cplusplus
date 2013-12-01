#include <iostream>

using namespace std;

class A
{
public:
    virtual static int virtFunc() {cout<<"Class A virtFunc"<<endl,return 0;} 
};

int main(int argc, char* argv[])
{
    cout<<"hello"<<endl;
    return 0;
}
