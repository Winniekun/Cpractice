//
// Created by kongweikun on 18-6-8.
//
//三位数反转
#include <stdio.h>


int reverse01(){
    int n;
    scanf("%d",&n);
    printf("%d%d%d\n",n%10,n/10%10,n/100);
    return 0;
}

int reverse02(){
    int n,m;
    scanf("%d",&n);
    m = (n%10)*100+(n/10%10)*10+(n/100);
    printf("%03d\n",m);
    return 0;
}

int main(){
    printf("三位数字反转第一个实现方法\n");
    reverse01();
    printf("三位数字反转第二个实现方法\n");
    reverse02();
    return 0;
}

