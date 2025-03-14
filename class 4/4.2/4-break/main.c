#include <stdio.h>
// break的作用
int main() {
    int i,sum;
    for(i=1,sum=0;i<=100;i++)
    {
        if(sum>2000)
        {
            break; // 当sum>2000时，终止循环
        }
        sum+=i;
    }
    printf("i=%d,sum=%d\n",i,sum);

    return 0;
}
