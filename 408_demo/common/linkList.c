//
// Created by Elderly on 2021/9/19.
//

#include "linkList.h"

//
// Created by Elderly on 2021/9/19.
//

int Init(LinkHead *L)
{
    LinkHead p=(LinkHead)malloc(sizeof(LinkNode));
    DataNode *q=(DataNode *)malloc(sizeof(DataNode));
    q->next = NULL;

    p->count = 0;
    p->next = q;
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
    for(int i=0;i<L->count ;i++)
    {
        printf("%d ",p->elem );
        p=p->next ;
    }
    return 0;
}

//int main() {
//    LinkHead L;
//    Init(&L);
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
