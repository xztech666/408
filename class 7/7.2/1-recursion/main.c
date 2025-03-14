#include <stdio.h>
// 递归调用求阶乘
/*递归的核心就是1.找公式     f(n)=n*f(n-1)
             2.确定递归的出口  n==1
  */
int f(int n)
{
    if(1==n) // 递归的出口,一定是在return之前
    {
        return 1;
    }
    return n*f(n-1);
}
// 上台阶,到第n阶有多少种方法
int step(int n)
{
    return n==1||2==n?n:step(n-1)+step(n-2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("f(%d)=%d\n", n, f(n));
    // 清空标准缓冲区
    char c;
    scanf("%c", &c);
    int m;
    scanf("%d", &m);
    printf("step(%d)=%d\n", m, step(m));
    return 0;
}
