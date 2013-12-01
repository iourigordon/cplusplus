#include <iostream>

using namespace std;

class BaseTestClass 
{
public:
    virtual void TestPrint1() {cout << "BaseTestClass virtual function TestPrint1 is called" << endl;}
    virtual void TestPrint2() {cout << "BaseTestClass virtual function TestPrint2 is called" << endl;}
};

class DerivedNoOverrideNoVirtualFuncs : public BaseTestClass
{
public:
    void TestPrint3() {cout << "DerivedNoOverride function TestPrint3 is called" << endl;}
};

class DerivedOverrideNoVirtualFuncs : public BaseTestClass
{
public:
    void TestPrint1() {cout << "DerivedOverrideNoVirtualFuncs overridden function TestPrint1 is called" << endl;}
};

class SecondDerivedOverrideNoVirtualFuncs : public DerivedOverrideNoVirtualFuncs
{
public:
    void TestPrint1() {cout << "SecondDerivedOverrideNoVirtualFuncs overriden function TestPrint1 is called" << endl;}
};

class DerivedOverrideVirtualFuncs : public BaseTestClass
{
public:
    virtual void TestPrint1() {cout << "DerivedOverrideVirtualFuncs virtual function TestPrint1 is called" << endl;}
    void TestPrint2() {cout << "DerivedOverrideVirtualFuncs overriden function TestPrint2 is called" << endl;}
    virtual void TestPrint3() {cout << "DerivedOverrideVirtualFuncs virtual function TestPrint3 is called" << endl;}
};


typedef void (BaseTestClass::* FuncAddress)();

void printClassVtable(BaseTestClass* pVtableClass, int iNumVirtFunctions, string sNameOfClass)
{
    unsigned long startAddrPtrLong = *((unsigned long*)pVtableClass);
    FuncAddress* funcAddress;
    
    cout<<"-"<<sNameOfClass<<" memory location = "<<hex<<pVtableClass<<endl;
    cout<<"-"<<sNameOfClass<<" size = "<<sizeof(BaseTestClass)<<endl;
    cout<<"---VTable start address = "<<hex<<startAddrPtrLong<<endl;
    for (int i=0; i < iNumVirtFunctions; i++)
    {
        funcAddress = reinterpret_cast<FuncAddress*>(startAddrPtrLong+i*4);
        cout<<"------funcAddress = "<<hex<<funcAddress<<endl;
        cout<<"------funcAddress[0] = "<<hex<<funcAddress[0]<<endl;
        cout<<"------calling function ";
        (pVtableClass->*(*funcAddress))();
    }
}

int main(int argc, char* argv[])
{
    BaseTestClass* test_one = new BaseTestClass();
    BaseTestClass* test_two = new BaseTestClass();
    DerivedNoOverrideNoVirtualFuncs* test_three = new DerivedNoOverrideNoVirtualFuncs();
    DerivedOverrideNoVirtualFuncs* test_four = new DerivedOverrideNoVirtualFuncs();
    SecondDerivedOverrideNoVirtualFuncs* test_five = new SecondDerivedOverrideNoVirtualFuncs();
    DerivedOverrideVirtualFuncs* test_six = new DerivedOverrideVirtualFuncs();
    DerivedOverrideVirtualFuncs* test_seven = new DerivedOverrideVirtualFuncs();

    cout<<"BaseTestClass Instance One"<<endl;
    printClassVtable(test_one,2,"BaseTestClass");
    cout<<"BaseTestClass Instance Two"<<endl;
    printClassVtable(test_two,2,"BaseTestClass");
    cout<<"Virtual table is shared between two instances of the same class"<<endl;

    cout<<"DerivedNoOverrideNoVirtualFuncs Instance"<<endl;
    printClassVtable(test_three,2,"DerivedNoOverrideNoVirtualFuncs");
    cout<<"Different Instance of vtable is created for the derived class, although no virtual functions are overriden"<<endl;

    cout<<"DerivedOverrideNoVirtualFuncs Instance"<<endl;
    printClassVtable(test_four,2,"DerivedOverrideNoVirtualFuncs");
    cout<<"SecondDerivedNoOverrideNoVirtualFuncs Instance"<<endl;
    printClassVtable(test_five,2,"SecondDerivedOverrideNoVirtualFuncs");
    cout<<"DerivedNoOverrideNoVirtualFuncs and SecondDerivedNoOverrideNoVirtualFuncs TestPrint1 are still placed in the virtaul table"<<endl;
    cout<<"Weird ah?"<<endl;

    cout<<"DerivedOverrideVirtualFuncs Instance One"<<endl;
    printClassVtable(test_six,3,"DerivedOverrideVirtualFuncs");
    cout<<"DerivedOverrideVirtualFuncs Instance Two"<<endl;
    printClassVtable(test_seven,3,"DerivedOverrideVirtualFuncs");

    delete test_seven;
    delete test_six;
    delete test_five;
    delete test_four;
    delete test_three;
    delete test_two;
    delete test_one;
    return 0;
}

#if 0
// you can get the VTable location either by dereferencing the
// first pointer in the object or by analyzing the compiled binary.
unsigned long VTableLocation = 0U;
// then you have to figure out which slot the function is in. this is easy
// since they're in the same order as they are declared in the class definition.
// just make sure to update the index if 1) the function declarations are
// re-ordered and/or 2) virtual methods are added/removed from any base type.
unsigned VTableOffset = 0U;
typedef void (__thiscall Base::*FunctionType)(const Base*);
FunctionType* vtable = reinterpret_cast<FunctionType*>(VTableLocation);

bool hooked = false;
HANDLE process = ::GetCurrentProcess();
DWORD protection = PAGE_READWRITE;
DWORD oldProtection;
if ( ::VirtualProtectEx( process, &vtable[VTableOffset], sizeof(int), protection, &oldProtection ) )
{
        vtable[VTableOffset] = static_cast<FunctionType>(&ReplacementMethod);

        if ( ::VirtualProtectEx( process, &vtable[VTableOffset], sizeof(int), oldProtection, &oldProtection ) )
                hooked = true;
}
#endif
