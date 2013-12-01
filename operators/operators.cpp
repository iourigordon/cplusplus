#include <iostream>

using namespace std;

struct X
{
    int i;
    X(int iArg);
    int operator+(int iRhs);
};

X::X(int iArg)
{
    i = iArg;
}

int X::operator+(int iRhs)
{
    return i+iRhs;
}

struct Y
{
    int i;
    Y(X xArg);
    int operator+(X xRhs);
    operator int();
};

Y::Y(X xArg)
{
    i = xArg.i;
}

int Y::operator+(X xRhs)
{
    return this->i + xRhs.i;
}

Y::operator int()
{
    return this->i;
}

X operator*(X xLhs, Y yRhs)
{
    return xLhs.i + yRhs.i;
}

int f(X xArg)
{
    return 2+ xArg.i;
}

X x = 1;
Y y = x;
int i = 2;

int main()
{
    cout<<i+10<<endl;
    cout<<(int)y+10<<endl;
    cout<<y+X(10)*y<<endl;
    cout<<x+y+i<<endl;
    cout<<x*x+i<<endl;
    cout<<f(7)<<endl;
    cout<<f(X(y.i))<<endl;
    cout<<y+y<<endl;
    cout<<106+y<<endl;
}
