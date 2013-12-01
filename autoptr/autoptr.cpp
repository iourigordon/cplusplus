#include <string>
#include <memory>
#include <iostream>

using namespace std;

class TestAutoPtr
{
public:
    TestAutoPtr(string& sName)
    {
        m_sName = sName;
        cout << "TestAutoPtr constructor" << endl;
    }    
    TestAutoPtr(TestAutoPtr& rhs) 
    {
        m_sName = rhs.m_sName;
        cout << "TestAutoPtr CopyConstructor" << endl;
    }    
    ~TestAutoPtr() {cout << "TestAutoPtr Destructor" << endl;}

    void PrintName() {cout << "m_sName = " << m_sName << endl;}
private:
    string m_sName;
};

int main(int argc, char* argv[])
{
    string testString("first");
    auto_ptr<TestAutoPtr> ptr(new TestAutoPtr(testString));

    cout << "ptr points to "; ptr.get()->PrintName();

    auto_ptr<TestAutoPtr> ptr2(ptr);

    if (ptr.get()!=NULL)
    {
        cout << "ptr points to "; ptr.get()->PrintName();
    }
    else
        cout << "ptr points to null" << endl;

    if (ptr2.get()!=NULL)
    {
        cout << "ptr2 points to "; ptr2.get()->PrintName();
    }
    else
        cout << "ptr2 points to null" << endl;

    return 0;
}
