//
// Created by kongweikun on 18-6-23.
//
//指针变量的定义和初始化
#include <stdio.h>
int main(){
    int a = 0, b = 1;
    char c = 'A';
    int *pa = NULL, *pb = NULL;//对其进行初始化
    char *pc = NULL;//对其进行初始化
    pa = &a;
    pb = &b;
    pc = &c;
    printf("a is %d, &a is %p, pa is %p\n",a, &a, pa);
    printf("b is %d, &b is %p, pb is %p\n",b, &b, pb);
    printf("c is %d, &c is %p, pc is %p\n",c, &c, pc);
    return 0;
}