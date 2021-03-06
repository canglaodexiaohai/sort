
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;

void PrintfBuff(DataType* a, size_t n)//打印数组
{
    assert(a);
    for (size_t i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void InsertSort(DataType* a, size_t n)//直接插入
{
    assert(a);
    for (size_t i = 0; i < n-1; i++)
    {
        int end = i;
        int tmp = a[end + 1];
        while (end >= 0&&a[end]>tmp)
        {
            a[end + 1] = a[end];
            --end;
        }
        a[end + 1] = tmp;
    }
}
void TestInsertSort()
{
    DataType a[] = { 53,27,36,15,69,42 };
    InsertSort(a, sizeof(a) / sizeof(DataType));
    PrintfBuff(a, sizeof(a) / sizeof(DataType));
}
int main()
{

    TestInsertSort();
    return 0;
}
