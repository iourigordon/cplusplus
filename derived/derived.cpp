#include <iostream>

using namespace std;

class base
{
public:
    int j;
    virtual void iam() {cout << "base\n";}
    base() {cout << "base constructor\n";}
    virtual ~base() {cout << "base destructor\n";}
};

class first : public base
{
public:
    int i;
    virtual void iam() {cout << "first\n";}
    first() {cout << "first constructor\n";}
    ~first() {cout << "first destructor\n";}
    
};

class second: public base
{
public:
    virtual void iam() {cout << "second\n";}
    second() {cout << "second constructor\n";}
    ~second() {cout << "second destructor\n";}
};

int main(int argc, char* argv[])
{
    
    //first test;
    //base bs;
    first* f = new first();
    base* b = f;
    
    cout << "Address f    = " << hex << f << "\n";
    cout << "Address f->j = " << hex << &(f->j) << "\n";
    cout << "Address f->i = " << hex << &(f->i) << "\n";
    
    //cout << "Address bs    = " << hex << &bs << "\n";
    //cout << "Address bs.j  = " << hex << &(bs.j) << "\n";
    
    delete b;
    
#if 0
    base b;
    first f;
    second s;
    
    base* pf = &f;
    base* ps = &s;
    
    b.iam();
    f.iam();
    s.iam();
    
    cout << "First Class pointer to Base ";
    pf->iam();
    cout << "Second Class pointer to Base ";
    ps->iam();
#endif
}
