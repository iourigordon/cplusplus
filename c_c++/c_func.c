#include <stdio.h>
#include "c++_struct.h"

#ifdef __cplusplus
extern "C" {
#endif

    void testStruct(Test structure)
    {
        Test structure2(10,15);
        structure2.sum();
        structure.sum();
        printf("structure.c = %d; structure.a = %d; structure.b = %d\n",structure.c,structure.a,structure.b);
        printf("structure2.c = %d; structure2.a = %d; structure2.b = %d\n",structure2.c,structure2.a,structure2.b);
        printf("hello\n");
    }


#ifdef __cplusplus
}
#endif
