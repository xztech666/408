#include <stdio.h>
// for循环实现1+3+5+...+99的和
int main() {
    int i, sum;
    for(i = 1, sum = 0; i <= 99; i++)
    {
        if(0==i%2)
        {
            continue; // continue 跳过本次循环，继续下一次循环
        }
        sum += i;
    }
    printf("sum = %d\n", sum);

    return 0;
}
//#include <stdio.h>
// for循环实现1+3+5+...+99的和
//int main()
//{
//    int i, sum;
//    for(i = 1, sum = 0; i <= 99; i+=2)
//    {
//        sum += i;
//    }
//    printf("sum = %d\n", sum);
//
//    return 0;
//}