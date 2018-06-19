//
// Created by kongweikun on 18-6-19.
//

//蛇形数组
#include <stdio.h>
#include <string.h>
#define maxn 20
int a[maxn][maxn];

int main(){
    int n = 0, x = 0, y = 0, tot = 0;
    scanf("%d",&n);
    memset(a, 0, sizeof(a));//将数组清零
    tot = a[x = 0][y = n-1] = 1;
    while (tot < n*n){
        while (x+1 < n && !a[x+1][y]) a[++x][y] = ++tot; // !a[x+1][y] 等价于 a[x+1][y] == 0
        while (y-1 >= 0 && !a[x][y-1]) a[x][--y] = ++tot;
        while (x-1 >= 0 && !a[x-1][y]) a[--x][y] = ++tot;
        while (y+1 < n && !a[x][y+1]) a[x][++y] = ++tot;
    }
    for (x = 0 ; x < n; x++){
        for (y = 0; y < n; y++){
            printf("%3d",a[x][y]);
        }
        printf("\n");
    }
    return 0;
}