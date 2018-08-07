//
// Created by kongweikun on 18-8-5.
//
//结构体

#include <stdio.h>
#include <string.h>

typedef struct  date{
    int year;
    int month;
    int day;
} DATE;

typedef struct student{
    long studentID;
    char studentName[10];
    char studentSex;
    DATE birthday;
    int score[4];
} STUDENT;

int main(){
    STUDENT stu1 = {100310121, "孔维坤", 'M', {1996,10,22}, {89, 83, 99,100}};
    STUDENT stu2;
    stu2 = stu1;
    printf("stu2: %ld %8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n",stu2.studentID,stu2.studentName,
    stu2.studentSex, stu2.birthday.year,stu2.birthday.month,stu2.birthday.day,
    stu2.score[0],stu2.score[1],stu2.score[2],stu2.score[3]);
    return 0;
}

