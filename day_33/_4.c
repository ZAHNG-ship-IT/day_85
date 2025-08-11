// // 指针数组
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     int* pa = &a;
//     int* pb = &b; 
//     int* pc = &c;
//     int *arr[3] = { pa,&b,&c }; //指针数组，存放的是地址//测试后，问题不大
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ",*arr[i]); //通过指针数组访问变量
//         printf("%p\n",arr[i]); //打印地址
//     }
//     return 0;
// //     10 00000000005FFEAC
// // 20 00000000005FFEA8
// // 30 00000000005FFEA4
// //连续存放
// }

#include <stdio.h>
// 指针数组模拟二维数组
int main()
{
    int a[3][4] = { 0 };
    int* arr[3] = { a[0],a[1],a[2] }; //指针数组，存放的是地址
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = i + j; //通过指针数组访问二维数组元素
        }
    }
    //数组访问


    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]); //通过指针数组访问二维数组元素
        }
        printf("\n");
    }
    return 0;
}