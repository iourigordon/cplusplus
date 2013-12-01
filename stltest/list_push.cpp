#include <list>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class TestString
{
    public:
        TestString();
        TestString(string Str1, string Str2);
        TestString(const TestString& rRhs);
        TestString& operator= (TestString& rRhs);
        ~TestString();

        string m_Str1;
        string m_Str2;
};

TestString::TestString()
{
    cout<<"TestString Default Constructor"<<endl;
}

TestString::TestString(string Str1, string Str2)
{
    m_Str1=Str1;
    m_Str2=Str2;
    cout<<"TestString Constructor m_Str1="<<m_Str1<<";m_Str2="<<m_Str2<<";"<<endl;
}

TestString::TestString(const TestString& rRhs)
{
    m_Str1=rRhs.m_Str1;
    m_Str2=rRhs.m_Str2;
    cout<<"TestString Copy Constractor m_Str1="<<m_Str1<<";m_Str2="<<m_Str2<<";"<<endl;
}

TestString& TestString::operator= (TestString& rRhs)
{
    m_Str1=rRhs.m_Str1;
    m_Str2=rRhs.m_Str2;
    cout<<"TestString operator= m_Str1="<<m_Str1<<";m_Str2="<<m_Str2<<";"<<endl;
}

TestString::~TestString()
{
    cout<<"TestString destructor"<<endl;
}

int main(int argc, char* argv[])
{
    stringstream ss1;
    stringstream ss2;

    TestString listElem;

    list<TestString>* pTestList = new list<TestString>();
    list<TestString>::iterator it;

    ss1<<"int";
    ss2<<2;    
    pTestList->push_back(TestString(ss1.str(),ss2.str()));
    ss1.str(""),ss2.str("");

    ss1<<"string";
    ss2<<"test";    
    pTestList->push_back(TestString(ss1.str(),ss2.str()));
    ss1.str(""),ss2.str("");

    for(it=pTestList->begin();it!=pTestList->end();it++)
    {
        listElem = *it;
        cout<<"m_Str1="<<listElem.m_Str1<<";m_Str2="<<listElem.m_Str2<<";"<<endl;
    }

    delete pTestList;
    return 0;
}
