//
// Created by kongweikun on 18-6-14.
//

//第二章习题
#include <stdio.h>
//水仙花数
int daffodil(){
    printf("水仙花数\n");
    for (int i =100;i<999;i++){
        int hundred = i/100;
        int ten = i/10%10;
        int single = i%10;
        if (i == hundred*hundred*hundred + ten*ten*ten + single*single*single){
            printf("%d\n",i);
        }
    }
}

//韩信点兵
int hanxin(){
    printf("韩信点兵\n");
    int a,b,c;
    int total = 0;
    const int  standard = 105;
    scanf("%d%d%d",&a,&b,&c);
    total = a*70 + b*21 + c*15;
    if ((total % standard) < 100){
        printf("%d",total%standard);
    } else printf("No Anwser");


}

//倒三角

//子序列求和

//分数化小数

//排列

int main(){
//    daffodil();
    hanxin();
}