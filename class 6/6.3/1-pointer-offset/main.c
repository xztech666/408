#include <stdio.h>
#define N 5
// 指针的偏移使用,就是对指针进行加加减减操作
int main() {
    int a[N]={1,2,3,4,5};
    int *p;
    p=a; // 数组名内存储了数组的首地址, 所以可以直接赋值给指针 ==> p=&a[0]
    int i;
    for(i=0;i<N;i++)
    {
        printf("%3d",*(p+i));
    }
    printf("\n-------------\n");
    p=&a[4];
    for(i=0;i<N;i++)
    {
        printf("%3d",*(p-i));
    }
    return 0;
}
