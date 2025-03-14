//#include <stdio.h>
//
//int main() {
//    int i;
//    char j;
//    float k;
//    scanf("%d %c %f", &i, &j, &k);
//    printf("%5.2f",i+j+k);
//
//    return 0;
//}

# include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=0 && x<=10000)
    {
        if(x%4==0 && x%100!=0 || x%400==0)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}