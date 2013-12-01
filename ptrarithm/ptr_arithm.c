#include <stdio.h>

typedef struct _TestStruct
{
	int iStructId;
	int iStructVal;
} TestStruct;

#define ARRAY_SIZE 5
TestStruct arr[ARRAY_SIZE];

int main(int argc, char* argv[])
{
	int i;
	TestStruct* arr_ptr = arr;

	for (i=0;i< ARRAY_SIZE;i++)
	{
		arr[i].iStructId = i;
		arr[i].iStructVal = i;
	}

	i = 0;
	while(i<ARRAY_SIZE)
	{
		printf("Element %d\nStructId=%d; StructVal=%d\n",i,arr_ptr->iStructId,arr_ptr->iStructVal);
		arr_ptr+=2;
		i+=2;
	}
	return 0;
}
