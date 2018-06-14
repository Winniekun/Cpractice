//
// Created by kongweikun on 18-6-14.
//阶乘之和
#include <stdio.h>
#include <time.h>
int main(){
    const int MOD = 1000000;
    int n,S = 0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int init = 1;
        for (int j = 1;j <= i;j++){
            init = init*j%MOD;
        }
        S = (init+S)%MOD;
    }
    printf("%d\n",S);
//    添加时间测试
    printf("time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
}
