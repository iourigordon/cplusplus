struct Test
{
    Test(int A, int B) {a = A; b = B;}
    Test(Test &rhs) {a = 1; b = 1;}

    void sum() {c=a+b;}

    int a;
    int b;
    int c;
};
