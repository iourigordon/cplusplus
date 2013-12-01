#include <iostream>
#include <string>

using namespace std;

class CpyConstructor
{
public:
    CpyConstructor(string sName):m_Name(sName){;}
    ~CpyConstructor() {;}
    
    CpyConstructor(CpyConstructor& Cpy):m_Name(Cpy.m_Name)
    {
        ;
    }
public:
    string m_Name;
};

int main(int argv, char** argc)
{
    CpyConstructor A("A");
    CpyConstructor B(A);

    cout<<"A name is "<<A.m_Name<<endl;
    cout<<"B name is "<<B.m_Name<<endl;
};
