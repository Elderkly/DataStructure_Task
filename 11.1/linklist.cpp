# include<stdio.h>
# include<sys/malloc.h>
typedef char ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;                                 //  指向后继结点
} LinkNode;                                             //  声明单链表结点类型

//  头插法建立单链表
void CreateListF(LinkNode *&L, ElemType a[], int n) {
    LinkNode *s;
    L = (LinkNode * )malloc(sizeof(LinkNode));          //  创建头结点
    L -> next = NULL;
    for (int i = 0; i < n; i++) {
        s = (LinkNode * )malloc(sizeof(LinkNode));      //  创建新节点s
        s -> data = a[i];
        s -> next = L -> next;                          //  将s插入到头节点后
        L -> next = s;
    }
}

//  尾插法建立单链表
void CreateListR(LinkNode *&L, ElemType a[], int n) {
    LinkNode *s, *r;
    L = (LinkNode * )malloc(sizeof(LinkNode));          //  创建头结点
    L -> next = NULL;
    r = L;                                              //  r始终插入尾结点，开始时向头结点
    for (int i = 0; i < n; i++) {
        s = (LinkNode * )malloc(sizeof(LinkNode));      //  创建新节点s
        s -> data = a[i];
        r -> next = s;                                  //  将结点s插入r结点之后
        r = s;
    }
    r -> next = NULL;                                   //  尾结点next域置为NULL
}

//  初始化线性表
void InitList(LinkNode *&L) {
    L = (LinkNode * )malloc(sizeof(LinkNode));
    L -> next = NULL;
}

//  摧毁线性表
void DestroyList(LinkNode *&L) {
    LinkNode *pre = L, *p = pre -> next;
    while(p != NULL) {                                  //  遍历摧毁线性表
        free(pre);
        pre = p;
        p = pre -> next;
    }
    free(pre);
}

//  判断线性表是否为空表
bool ListEmpty(LinkNode *L) {
    return (L -> next == NULL);
}

//  求线性表的长度
int ListLength(LinkNode *L) {
    int i = 0;
    LinkNode *p = L;
    while(p -> next != NULL) {
        i ++;
        p = p -> next;
    }
    return i;
}

//  输出线性表
void DispList(LinkNode *L) {
    LinkNode  *p = L -> next;
    while(p != NULL) {
        printf("%c", p -> data);
        p = p -> next;
    }
    printf("\n");
}

//  求线性表中第i个元素值
bool GetElem(LinkNode *L, int i, ElemType &e) {
    int j = 0;
    LinkNode *p = L;
    if (i <= 0) return false;
    while(j < i && p != NULL) {                         //  遍历查找第i个元素
        j ++;
        p = p -> next;
    }
    if (p == NULL)
        return false;
    else {
        e = p -> data;
        return true;
    }
}

//  查找第一个值域为e的元素序号
int LocateElem(LinkNode *L, ElemType e) {
    int i = 1;
    LinkNode *p = L -> next;
    while(p != NULL && p -> data != e) {
        p = p -> next;
        i ++;
    }
    if (p == NULL)
        return 0;
    else
        return i;
}

//  插入第i个元素
bool ListInsert(LinkNode *&L, int i, ElemType e) {
    int j = 0;
    LinkNode *p = L, *s;
    if (i <= 0) return false;
    while(j < i - 1 && p != NULL) {                         //  判断i位置是否存在元素 即i位置是否合法
        j ++;
        p = p -> next;
    }
    if (p == NULL)                                          //  没有找到第i个元素
        return false;
    else {                                                  //  找到第i个元素 将e插入到i后面
        s = (LinkNode * )malloc(sizeof(LinkNode));
        s -> data = e;
        s -> next = p -> next;
        p -> next = s;
        return  true;
    }
}

//  删除第i个元素
bool ListDelete(LinkNode *&L, int i, ElemType &e) {
    int j = 0;
    LinkNode *p = L, * q;
    if (i <= 0) return false;
    while(j < i - 1 && p != NULL) {                         //  查找i是否合法
        j++;
        p = p -> next;
    }
    if (p == NULL)
        return false;
    else {                                                  //  找到i这个元素 将i后面的一个元素向前覆盖i
        q = p -> next;
        if (q == NULL)
            return false;
        e = q -> data;
        p -> next = q -> next;
        free(q);                                             // 释放q
        return true;
    }
}
