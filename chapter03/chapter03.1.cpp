//
// Created by kongweikun on 18-6-19.
//

//逆序输出
#include <stdio.h>
#define maxn 105
int a[maxn];

int main(){
    int x, n = 0;
    while (scanf("%d",&x) == 1){
        a[n++] = x;
    }
    for (int i = n-1; i >= 1; i--){
        printf("%d",a[i]);
    }
    printf("%d\n",a[0]);
    return 0;
}