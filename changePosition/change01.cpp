//
// Created by kongweikun on 18-6-9.
//

//交换变量
#include <stdio.h>

int change01(){

    int a, b, t;
    scanf("%d%d",&a,&b);
    t = a;
    a = b;
    b = t;
    printf("%d%d\n",a,b);

}

int change02(){

    int a, b;
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d%d\n",a,b);
}

int change03(){
    int a , b;
    scanf("%d%d",&a ,&b);
    printf("%d%d\n",b,a);
}

int main(){
    printf("三变量法\n");
    change01();
    printf("加法交换\n");
    change02();
    printf("黑盒子\n");
    change03();
}