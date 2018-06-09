//
// Created by kongweikun on 18-6-9.
//
//练习题
//1. 平均数
//2. 温度
//3. 连续和
//4. 正弦和余弦
//5. 打折
//6. 三角形
//7. 年份
//
/*
 * 计算平均值
 * */
#include <stdio.h>
int average(){
    int  a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.3f\n",(a+b+c)/3.0);
    return 0;
}

/*
 * 温度转换
 * */
int temperature(){
    float f,c;
    scanf("%f",&f);
    c = (f-32.00)/1.8000;
    printf("%f\n",c);
}

/*
 * 计算连续和
 * */
int sum(){

    int n,total;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        total += i;
    }
    printf("第一种方法的结果%d",total);

}
/*
 * 公式求和
 * */
int sum1(){
    int n;
    scanf("%d",&n);
    printf("%d\n",((1+n)*n)/2);
}

/*
 * 衣服打折
 * */

int discount(){
    int n;
    float  price;
    scanf("%d",&n);
    if (n>1){
        price = n*95*0.85;
        printf("%.2f",price);
    } else if (n == 1){
        printf("95");
    } else{
        printf("输入错误");
    }
}

/*
 * 判断是否是三角形
 * */
int triangle(){

    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b<c && a+c<b && b+c<a){
        printf("不符合要求");
    } else{
        printf("符合要求");
    }
}

/*
 * 判断年份
 * */
int year(){
    int year, rem_4, rem_100, rem_400;

    scanf("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
    {
        printf("是闰年\n");
    }
    else
    {
        printf("不是闰年\n");
    }

    return 0;
}

int main(){
//    printf("计算三个数的平均数，并输出三位小数\n");
//    average();
//    printf("温度单位之间的转换\n");
//    temperature();
//    printf("连续和\n");
//    sum();
    printf("打折\n");
    discount();

}