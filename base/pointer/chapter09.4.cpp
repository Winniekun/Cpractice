//
// Created by kongweikun on 18-6-23.
//

//按值调用与模拟按引用调用
#include <stdio.h>
void Fun(int par);
void Fun1(int *par);
int main(){
    int arg = 1;
    printf("arg = %d\n",arg);
//    Fun(arg);
    Fun1(&arg);
    printf("arg = %d\n",arg);
    return 0;
}

void Fun(int par){
    printf("par = %d\n",par);
    par = 2;
}

void Fun1(int *par){
    printf("par = %d\n",*par);
    *par = 2;
}
