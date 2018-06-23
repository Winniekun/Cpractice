//
// Created by kongweikun on 18-6-23.
//
//用指针变量做函数参数的程序实例
#include <stdio.h>
#define N 40
void FindMax(int score[], long num[], int n, int *pMaxScore, long *pMaxNum);

int main(){
    int score[N],maxScore;
    int n, i;
    long num[N], maxNum;
    printf("How many students?");
    scanf("%d",&n);
    printf("Input student's ID and score: \n");
    for(i = 0; i < n; i++){
        scanf("%ld%d",&num[i],&score[i]);
    }
    printf("%ld  %d",maxNum,maxScore);
    FindMax(score, num, n, &maxScore, &maxNum);
    printf("maxScore = %d, maxNum = %ld\n",maxScore, maxNum);
    return 0;
}

/*
 *计算最高分及其相应学生的学号
 */
void FindMax(int score[], long num[], int n, int *pMaxScore, long *pMaxNum){
    int i;
    *pMaxScore = score[0];
    *pMaxNum = num[0];
    for(i = 1; i < n; i++){
        if (score[i] > *pMaxScore){
            *pMaxScore = score[i];
            *pMaxNum = num[i];
        }
    }
}
