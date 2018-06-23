//
// Created by kongweikun on 18-6-23.
//
//指针运算符
#include <stdio.h>
int main(){
    int a = 0, b = 1;
    char c = 'A';
    int *pa = &a;
    int *pb = &b;
    char *pc = &c;
    *pa = 9;
    printf("a is %d, &a is %p, pa is %p *pa is %d\n",a, &a, pa, *pa);
    printf("b is %d, &b is %p, pb is %p *pb is %d\n",b, &b, pb, *pb);
    printf("c is %d, &c is %p, pc is %p *pc is %c\n",c, &c, pc, *pc);

}

