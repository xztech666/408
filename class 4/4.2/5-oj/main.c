//#include <stdio.h>
//// n!的值  factorial n
//int main() {
//    int i,sum = 1;
//    scanf("%d",&i);
//    for(i;i<=10&&i>=1;i--)
//    {
//        sum = sum * i;
//    }
//    printf("%d",sum);
//
//    return 0;
//}

#include<stdio.h>
// 某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
int main()
{
    int a, b, c, d;  // a: 10元，b: 5元，c: 2元，d: 1元
    int count = 0;

    // a, b, c, d 每种票子至少一张
    for (a = 1; a <= 10; a++)
    {
        for (b = 1; b <= 20; b++)
        {
            for (c = 1; c <= 37; c++)
            {
                for (d = 1; d <= 37; d++)
                {
                    // 总数必须是40张，且总金额必须是100元
                    if (a + b + c + d == 40 && a * 10 + b * 5 + c * 2 + d * 1 == 100)
                    {
                        //printf("%d %d %d %d\n", a, b, c, d);
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", count);

    return 0;
}

//#include<stdio.h>
//// 输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值；
//// symmetric number
////例如 12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no
//int main()
//{
//    int i,backup_i,a=0;
//    scanf("%d",&i);
//    backup_i = i; // 备份i
//    while(i)
//    {
//        a = a * 10 + i % 10;
//        i = i / 10;
//    }
//    if(a == backup_i)
//    {
//        printf("yes");
//    }
//    else
//    {
//        printf("no");
//    }
//
//    return 0;
//}