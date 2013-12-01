#include <stdio.h>

int main(int argc, char** argvp)
{
    int i;
    const char iConst = 5;
    char buff[10];
    int iNumber = 2;

    char* test1;
    char* const test2 = &iConst;
    const char* test3 = buff;

    for (i=0;i<10;i++)
        buff[i] = i;

    printf("test3 = %s;*test3 = %d\n",test3,*test3);
    test3 = test3+1;
    *test3 = 11;
    test2++;
    printf("test3 = %s;*test3 = %d\n",test3,*test3);
    test1 = buff;

    printf("test2 = %c\n",*test2);
    return 0;
}
