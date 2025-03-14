//
// Created by anggenb on 2024/11/16.
//

#include "func.h"

int print_star(int i)
{
    printf("*****************\n");
    printf("print_star %d\n",i);
    return i+3;
}

void print_message() // 函数定义
{
    printf("how do you do?\n");
    print_star(6);
}
