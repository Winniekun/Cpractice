//
// Created by kongweikun on 18-6-22.
//
//链表的建立与基本运算

#include <iostream>
#include <malloc.h>
#include <stdio.h>
#include <pthread.h>

typedef  int Elemtype;
typedef struct node{
    Elemtype data;
    struct node *next;
}Lnode;
Lnode *head;
int length(Lnode *p){
    int n = 0;
    Lnode *q = p;
    while (q!= NULL){
        n++;
        q = q->next;
    }
    return n;
}
//取出结点
int get(Lnode *p, int i){
    int j = 1;
    Lnode *q = p;
    while (j < i && q!=NULL){
        q = q->next;
        j++;
    }
    if (q != NULL){
        return (q->data);
    } else {
        printf("位置参数不正确\n");
    }
}

int locate(Lnode *p, Elemtype x){
    int n = 0;
    Lnode *q = p;
    while (q!=NULL&&q->data!=x){
        q = q->next;
        n++;
    }
    if (q==NULL){
        return -1;
    } else{
        return (n+1);
    }
}

void insert(Elemtype x, int i){
    int j = 1;
    Lnode *s, *q;
    s = (Lnode*)malloc(sizeof(Lnode));
    s->data = x;
    q = head;
    if (i == 1){
        s->next = q;
        head = s;
    } else{
        while ((j<i-1)&&(q->next!=NULL)){
            q = q->next;
            j++;
        }
        if (j==i-1){
            s->next = q->next;
            q->next = s;
        }else{
            printf("位置参数不正确！\n");
        }
    }
}

void display(Lnode *p){
    Lnode *q;
    q=p;
    printf("单链表显示：\n");
    if (q == NULL){
        printf("链表为空");
    } else if(q->next == NULL){
        printf("%d\n",q->data);
    } else{
        while (q->next!=NULL){
            printf("%d->",q->data);
            q = q->next;
        }
        printf("%d",q->data);
    }
    printf("\n");
}
int main(void){
    Lnode *q;
    int d, i, n, select, k, flag = 1;
    head = NULL;
    printf("请输入数据长度: ");
    scanf("%d",&n);
    for (i = 1;i<= n;i++){
        printf("将数据插入到链表中: ");
        scanf("%d",&d);
        insert(d,i);//参数1 链表 参数2 位置
    }
    display(head);
    printf("\n");
    while (flag){
        printf("1--求长度\n");
        printf("2--取结点\n");
        printf("3--求值查找\n");
        printf("4--增加节点\n");
        printf("5--退出\n");
        printf("输入你的选择\n");
        scanf("%d",&select);
        switch (select){
            case 1: {
                d = length(head);
                printf("\n 单链表的长度为:%d\n", d);
                printf("\n");
                display(head);
                printf("\n");
                break;
            }
            case 2: {
                printf("\n 请输入取出结点的位置: \n");
                scanf("%d",&d);
                k = get(head,d);
                printf("%d\n",k);
                display(head);
                printf("\n");
                break;
            }
            case 3:{
                printf("\n 请输入要查找的数据: \n");
                scanf("%d",&d);
                k = locate(head,d);
                printf("%d\n",k);
                display(head);
                printf("\n");
                break;
            }
            case 4:{
                printf("\n 请输入增加结点的位置 \n");
                scanf("%d",&k);
                printf("\n 请输入增加结点的数据 \n");
                scanf("%d",&d);
                insert(d,k);
                display(head);
                printf("\n");
                break;
            }
            case 5:{
                flag = 0;
                break;
            }
        }

    }
}




