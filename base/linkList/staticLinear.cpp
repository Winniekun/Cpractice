//
// Created by kongweikun on 18-8-6.
//

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define True 1
#define FALSE 0
typedef int Status;
/*结构*/
typedef int ElemType;
typedef struct {
    ElemType  data[MAXSIZE];
    int length;
}Sqlist;

/*获取元素*/
Status GetElem(Sqlist L, int i, ElemType *e){
    if (L.length == 0 || i<1 || i>L.length){
        return ERROR;
    }
    *e = L.data[i-1];
    return OK;
}


/*插入元素*/
Status ListInsert(Sqlist *L, int i, ElemType e){
    int k;
    if(L->length == MAXSIZE){
        return ERROR;
    }if(i<1 || i > L->length) {
        return ERROR;
    }if(i <= L->length){
        for (k = L->length-1;k >= i-1; k--){
            L->data[k+1] = L->data[k];
        }
    }
    L->data[i-1] = e;
    L->length++;//执行之后，链表长度增加
    return OK;
}

/*删除元素*/
Status ListDelete(Sqlist *L, int i, ElemType *e){
    int k ;
    if(L->data == 0){
        return ERROR;
    }if(i<i || i>L->length){
        return ERROR;
    }if(i <= L->length){
        for(k = i; k<L->length ; k++){
            L->data[k-1] = L->data[k];
        }
    }
    L->length--;
    return OK;
}

int main(){
    struct  Sq;
    ListDelete()
}






