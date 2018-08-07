//
// Created by kongweikun on 18-8-7.
//

#include <stdio.h>
int main(){
    int a [5]= {1,2,3,4,5};

    printf("元素1的地址为%p,值为%d\n",a, *a);
    printf("元素2的地址为%p,值为%d\n",a+1, *(a+1));
    printf("元素3的地址为%p,值为%d\n",a+2, *(a+2));
    printf("元素4的地址为%p,值为%d\n",a+3, *(a+3));

}