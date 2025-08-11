#include <stdio.h>
//二级指针
int main()
{
    int a = 10;
    int *p = &a; //一级指针
    int **pp = &p; //二级指针
    **pp = 20; //通过二级指针修改一级指针指向的值
    printf("%d\n",**pp); //10
    printf("%p\n",*pp); //p的值，一级指针的地址
    printf("%p\n",pp); //二级指针的地址
    return 0;
//     10
// 00000000005FFEC4
// 00000000005FFEB8

}