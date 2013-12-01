#include <iostream>
#include "c++_struct.h"

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif
extern void testStruct(Test structure);
#ifdef __cplusplus
}
#endif


int main(int argc, char* argv[])
{
    Test strTest(10,15);
    strTest.a = 10;
    strTest.b = 15;
    cout<<"strTest.a = "<<strTest.a<<"; strTest.b = "<<strTest.b<<endl;
    testStruct(strTest);
}
