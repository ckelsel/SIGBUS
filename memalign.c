
#define OFFSET(x, y) &((x*)0)->y

struct TestStruct
{
    int mVar1;
    int mVar2;
    int mVar3;
};

void myTestStruct()
{
    LOGI("TestStruct (size: %d)", sizeof(TestStruct));
    LOGI("-- Var1 offset: %d", OFFSET(TestStruct, mVar1));
    LOGI("-- Var2 offset: %d", OFFSET(TestStruct, mVar2));
    LOGI("-- Var3 offset: %d", OFFSET(TestStruct, mVar3));
}


struct TestStruct2
{
    int mVar1;
    long long mVar2;
    int mVar3;
};

void myTestStruct2()
{
    LOGI("TestStruct2 (size: %d)", sizeof(TestStruct2));
    LOGI("-- Var1 offset: %d", OFFSET(TestStruct2, mVar1));
    LOGI("-- Var2 offset: %d", OFFSET(TestStruct2, mVar2));
    LOGI("-- Var3 offset: %d", OFFSET(TestStruct2, mVar3));
}


struct TestStruct3
{
    int mVar1;
    long long mVar2 __attribute__ ((aligned(8)));
    int mVar3;
};

void myTestStruct3()
{
    LOGI("TestStruct3 (size: %d)", sizeof(TestStruct3));
    LOGI("-- Var1 offset: %d", OFFSET(TestStruct3, mVar1));
    LOGI("-- Var2 offset: %d", OFFSET(TestStruct3, mVar2));
    LOGI("-- Var3 offset: %d", OFFSET(TestStruct3, mVar3));
}
