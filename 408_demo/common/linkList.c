//
// Created by Elderly on 2021/9/19.
//

#include "linkList.h"

//
// Created by Elderly on 2021/9/19.
//

int InitLinkList(LinkHead *L,int DoublePoint)
{
    LinkHead p=(LinkHead)malloc(sizeof(LinkNode));
    DataNode *q=(DataNode *)malloc(sizeof(DataNode));
    q->next = NULL;

    p->count = 0;
    p->next = q;
    DoublePoint == 1 ? p->next2 = q : NULL;
    (*L) = p;
    return 0;
}
int Insert(LinkHead *L,int elem,int pos)
{
    if(pos<1||pos>(*L)->count+1)
    {
        return -1;
    }
    DataNode *q = (DataNode *)malloc(sizeof(DataNode));
    q->elem = elem;
    DataNode *p=(*L)->next;
    for(int i=1;i<pos;i++)
    {
        p=p->next ;
    }
    q->next = p->next ;
    p->next = q;
    (*L)->count += 1;
    return 0;
}

int Delete(LinkHead *L,int *elem,int pos)
{
    if(pos<1||pos>(*L)->count)
    {
        return -1;
    }
    DataNode *p = (*L)->next,*q;
    for(int i=1;i<=pos;i++)
    {
        p=p->next;
    }
    q=p->next ;
    p->next = q->next ;
    free(q);
    (*L)->count -= 1;
    return 0;
}

int Clear(LinkHead *L)
{
    DataNode *p=(*L)->next->next,*q;
    while(p!=NULL)
    {
        q = p;
        p=p->next ;
        free(q);
    }
    (*L)->next->next = NULL;
    (*L)->count = 0;
    return 0;
}

int Destory(LinkHead *L)
{
    DataNode *p=(*L)->next,*q;
    free(*L);
    while(p!=NULL)
    {
        q=p;
        p=p->next ;
        free(q);
    }
    (*L)=NULL;
    return 0;
}

int Traverse(LinkHead L)
{
    DataNode *p=L->next->next ;
    while(p != NULL)
    {
        printf("%d ",p->elem );
        p=p->next ;
    }
    return 0;
}

/*
 * 功能：原地置换算法
 * 思路：头插法
 * */
int SituReplace(LinkHead *L) {
    if ((*L)->count == 0) {
        return -1;
    }
    DataNode *p = (*L)->next->next;
    (*L)->next->next = NULL;
    while(p != NULL) {
        DataNode *temp;
        temp = p->next;
        p->next = (*L)->next->next;
        (*L)->next->next = p;
        p = temp;
    }
    return 0;
}

/*
 *  功能：一次遍历找到中间结点
 *  思路：双指针，一个指针一次走2步，另一个指针一次走1步，当第一个指针走到表尾时，第二个指针刚好指向中间结点
 * */
int FindMidElm(LinkHead L) {
    DataNode *mid = L->next,*p= L->next;
    while(mid && p && mid->next && p->next) {
        mid = mid->next;
        p = p->next->next;
    }
    printf("\n中间结点%d",mid->elem);
    return 0;
}

/*
 *  功能：查找倒数第k个元素
 *  思路：双指针，一个指针提前走k-1步，当第一个指针走到尾部时，第二个指针刚好指向倒数第k个元素
 * */
int EndFind(LinkHead L,int k) {
    if (k < 1 || k > L->count) {
        printf("\nk值不合法");
        return -1;
    }
    DataNode *p1 = L->next,*p2 = L->next;
    for(int i = 0; i < k-1; i++) {
        p2 = p2 -> next;
    }
    while (p1->next && p2->next) {
        p1 = p1->next;
        p2 = p2->next;
    }
    printf("\n倒数第%d个元素为%d",k,p1->elem);
    return 0;
}


//int main() {
//    LinkHead L;
//    InitLinkList(&L,0);
//    int n,m;
//    printf("输入线性表大小:");
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        printf("输入元素:");
//        scanf("%d",&m);
//        Insert(&L,m,1);
//    }
//    Traverse(L);
//
//    Delete(&L,&m,2);
//    printf("\n%d\n",m);
//    Traverse(L);
//    Clear(&L);
//    Traverse(L);
//}
