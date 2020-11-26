# include<stdio.h>
# include<sys/malloc.h>
# define MaxSize 50
typedef char ElemType;
typedef struct {
    ElemType data[MaxSize];                             //  存放顺序表元素
    int length;                                         //  存放顺序表的长度
} SqList;                                               //  声明顺序表的类型

//  整体建立顺序表
void CreateList(SqList *&L, ElemType a[], int n) {
    L = (SqList * )malloc(sizeof(SqList));
    for (int i = 0; i < n; i ++)
        L -> data[i] = a[i];
    L -> length = n;
}

//  初始化线性表
void InitList(SqList *&L) {
    L = (SqList *)malloc(sizeof(SqList));
    L -> length = 0;
}

//  摧毁线性表
void DestroyList(SqList *&L) {
    free(L);
}

//  判断线性表是否为空表
bool ListEmpty(SqList *L) {
    return (L -> length == 0);
}

//  求线性表的长度
int ListLength(SqList *L) {
    return (L -> length);
}

//  输出线性表
void DispList(SqList *L) {
    for (int i = 0; i < L -> length; i++)
        printf("%c", L -> data[i]);
    printf("\n");
}

//  求线性表中第i哥元素值
bool GetElem(SqList *L, int i, ElemType &e) {
    if (i < 1 || i > L -> length)
        return false;
    e = L -> data[i - 1];
    return true;
}

//  查找第一个值域为e的元素序号
int LocateElem(SqList *L, ElemType e) {
    int i = 0;
    while(i < L -> length && L -> data[i] != e)
        i ++;
    if (i >= L -> length)
        return 0;
    else
        return i + 1;
}

//  插入第i个元素
bool ListInsert(SqList *&L, int i, ElemType e) {
    int j;
    if (i < 1 || i > L -> length + 1)
        return false;
    i --;                                       //  将顺序表位序转化为data下标
    for (j = L -> length; j > i; j --)          //  将data[i]及后面的元素后移一个位置
        L -> data[j] = L -> data[j - 1];
    L -> data[i] = e;                           //  插入元素e
    L -> length ++;                             //  顺序表长度+1
    return true;
}

//  删除第i个元素
bool ListDelete(SqList *&L, int i, ElemType e) {
    int j;
    if (i < 1 || i > L -> length)
        return false;
    i --;
    e = L -> data[i];
    for (j = i; j < L -> length; j++)           //  将data[i]之后的元素前移一位 覆盖掉需要删除的元素
        L -> data[j] = L -> data[j + 1];
    L -> length --;                             //  顺序表长度减1
    return true;
}
