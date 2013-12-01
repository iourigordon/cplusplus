#ifndef __STRUCT_SAMPLE_H__
#define __STRUCT_SAMPLE_H__

typedef struct _testStruct
{
	_testStruct();
	_testStruct(int iArg);
	~_testStruct();

	int a;

	int  getInt();
	void setInt(int iArg);
} TestStruct;

#endif
