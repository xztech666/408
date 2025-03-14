#include <stdio.h>
// 数组传递
// 函数参数传递的是指针
// 数组名传递到子函数后,子函数的形参接收到是数组的起始地址
void print(int a[],int length) {  // 数组的长度不会传递
    int i;
    for(i=0;i<length;i++){
        printf("%d\n",a[i]);
    }
    a[3] = 100; // 修改了数组的值
}

int main() {
    int a[5]={1,2,3,4,5};
    print(a,sizeof(a)/sizeof(a[0]));
    printf("%d\n",a[3]);

    return 0;
}
