#include<stdio.h>
#include<malloc.h>

typedef int DataType;

//链栈（结点）的类型定义
typedef struct stacknode {
    /*请编写类型定义*/

} LinkStack;

//初始化栈：创建一个空的栈
LinkStack *InitStack() {
    LinkStack *S;
    S=NULL;
    return S;
}

//判断栈空：空则return 1，不空则return 0；
int EmptyStack(LinkStack *S) {
    if(S==NULL)
        return 1;
    else
        return 0;
}

//入栈操作
LinkStack *Push(LinkStack *S,DataType x) {
    LinkStack *p;
    p=(LinkStack*)malloc(sizeof(LinkStack));
    p->data=x;
    p->next=S;
    S=p;
    return S;
}

//出栈操作
LinkStack *Pop(LinkStack *S,DataType *x) {
    LinkStack *p;
    if(EmptyStack(S)) {
        printf("\t栈空，不能出栈!");
        return NULL;
    } else {
        *x=S->data;
        p=S;
        S=S->next;
        free(p);
        return S;
    }
}

//求栈顶元素
int GetTop(LinkStack *S,DataType *x) {
    if(EmptyStack(S)) {
        printf("栈空!");
        return 0;
    } else {
        *x=S->data;
        return 1;
    }
}

//显示栈中元素（打印出来栈中元素）
void ShowStack(LinkStack *S) {
    LinkStack *p=S;
    if(p==NULL)
        printf("\t栈空！");
    else {
        printf("从栈顶元素起栈中各元素为：");
        while(p!=NULL) {
            printf("%d ",p->data);
            p=p->next;
        }
    }
}

//十、二进制数转换
void D_B(LinkStack *S,DataType x) {
    /*进制转换*/
    while(x) {
        S=Push(S,x%2);/*余数入栈*/
        x/=2;/*被除数data整除以2，得到新的被除数*/
    }
    printf("转换后的二进制为：");
    while(!EmptyStack(S)) {
        S=Pop(S,&x);/*依次从栈中弹出每一个余数并输出*/
        printf("%d",x);
    }
}


//显示菜单的函数
void MenuStack() {
    printf("\n                     栈子系统");
    printf("\n==================================================");
    printf("\n|               1——初始化栈                    |");
    printf("\n|               2——入栈操作                    |");
    printf("\n|               3——出栈操作                    |");
    printf("\n|               4——求栈顶元素                  |");
    printf("\n|               5——显示栈中元素                |");
    printf("\n|               6——十、二进制数转换            |");
    printf("\n|               0——返回                        |");
    printf("\n==================================================");
    printf("\n请输入菜单号（0-7）:");
}


//main函数(主函数)，是程序执行的起点，程序执行总是从main函数开始
//如果有有其他函数，则完成对其他函数的调用后再返回到主函数，最后由main函数结束整个程序。
main() {
    //定义需要的变量：
    int i,n;
    LinkStack *S;
    DataType x;
    char ch1,ch2,a;
    ch1='y';

    //写一个while循环，实现多次使用功能
    while(ch1=='y'||ch1=='Y')
    {
        //先显示一下菜单：
        MenuStack();
        //输入选择选项
        scanf("%c",&ch2);
        getchar();

        //用switch分支语句，实现选择不同分支，执行不同的代码
        switch(ch2) {
            //1——初始化栈
            case  '1':
                S=InitStack();
                printf("栈的初始化完成！");
                break;

                //2——入栈操作
            case  '2':
                printf("请输入要入栈的元素个数：");
                scanf("%d",&n);
                printf("请输入%d个整数进行入栈：",n);
                for(i=0; i<n; i++) {
                    scanf("%d",&x);
                    S=Push(S,x);
                }
                printf("入栈成功！");
                break;

                //3——出栈操作
            case  '3':
                printf("请输入要出栈的元素个数：");
                scanf("%d",&n);
                printf("出栈的元素为：");
                for(i=0; i<n; i++) {
                    S=Pop(S,&x);
                    if(S!=NULL)
                        printf("%5d",x);
                }
                break;

                //4——求栈顶元素
            case  '4':
                if(GetTop(S,&x))
                    printf("当前的栈顶元素值为：%d",x);
                break;

                //5——显示栈中元素
            case  '5':
                ShowStack(S);
                break;

                //6——十、二进制数转换
            case  '6':
                S=InitStack();
                printf("请输入十进制正整数为:");
                scanf("%d",&x);/*输入十进制正整数*/
                D_B(S,x);/*调用进制转换函数*/
                break;


                //0——返回
            case  '0':
                ch1='n';
                break;

                //如果没有任何case匹配的时候，才会执行default语句
            default:
                printf("输入有误，请输入0-5进行选择！");
        }

        if(ch2!='0') {
            printf("\n按回车键继续，按任意键返回主菜单！\n");
            a=getchar();
            if(a!='\xA') {
                getchar();
                ch1='n';
            }
        }
    }
}
