//
// Created by kongweikun on 18-6-20.
//

#include <stdio.h>

int main(){
//    int var1;
//    char var2[10];
//
//    printf("var1 变量地址为：%p\n",&var1);
//    printf("var2 变量地址为：%p\n",&var2);
    int  var = 20;   /* 实际变量的声明 */
    int  *ip;        /* 指针变量的声明 */

    ip = &var;  /* 在指针变量中存储 var 的地址 */

    printf("Address of var variable: %p\n", &var  );

    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %p\n", ip );

    /* 使用指针访问值 */
    printf("Value of *ip variable: %d\n", *ip );
    return 0;
}