#include <iostream>

using namespace std;

class MyException
{
public:
     MyException() {cout<<"MyException Constructor"<<endl;}
     MyException(MyException& rhs) {cout<<"MyException CopyConstructor"<<endl;}
public:
    ~MyException() {cout<<"MyException Destructor"<<endl;}
};

class Test
{
public:
    Test() {cout<<"Test Constructor"<<endl;};
    Test(Test& rhs) {cout<<"Test CopyConstructor"<<endl;}
    ~Test()
    {
        //MyException expt;
        //throw (expt);
        cout<<"Test Destructor"<<endl;
    }
};

void testFunction() throw (MyException&)
{
    MyException expt;
    throw (expt);
//    Test test;
}

int main(int agrc, char* argv[])
{
#if 1
    //Test test;
    try
    {
        Test test2;
        cout << "Line Number " << __LINE__<<endl;
        testFunction();
        //delete test2;
        cout << "Line Number " << __LINE__<<endl;
    }
    catch (MyException& ex)
    {
        cout << "Line Number " << __LINE__<<endl;
        //delete ex;
        //Test* test1 = new Test();
        //delete test1;
        cout << "Line Number " << __LINE__<<endl;
    }
#else
    MyException excpt;
    throw(excpt);
#endif
    return 0;
}
