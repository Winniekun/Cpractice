//
// Created by kongweikun on 18-6-22.
//

#include <stdio.h>
int a = 4;
int f(int n){
    int t = 0;
    static int a = 5;
    printf("a = %d\n",a);
    if (n%2) {
        int a = 6; t += a++;
        printf("偶数t = %d\n",t);
    } else{
        int a = 7; t += a++;
        printf("奇数t = %d\n",t);
    }
    return t + a++;
}
int main(void){
    int s = a;
    int i = 0;
    for (;i<2;i++) {
        s += f(i);
    }
    printf("%d\n",s);
}