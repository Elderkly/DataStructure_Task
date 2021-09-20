
#include<stdio.h>
#include<stdlib.h>
#include "./common/linkList.h"
int main()
{
    //  原地置换
    LinkHead L;
    Init(&L,1);
    const int SIZE = 5;
    int a[SIZE] = {10,20,30,50,60};
    for(int i = 0;i < SIZE; i++) {
        Insert(&L,a[i],i + 1);
    }
    printf("原数组:\n");
    Traverse(L);
    printf("\n新数组:\n");
    SituReplace(&L);
    Traverse(L);

    //双指针
    LinkHead L2;
    Init(&L2,1);
    int b[SIZE] = {1,2,10,4,5};
    for(int i = 0;i < SIZE; i++) {
        Insert(&L2,b[i],i + 1);
    }
    //  一次遍历找到中间结点
    DataNode *mid = L2->next,*p= L2->next;
    while(mid && p && mid->next && p->next) {
        mid = mid->next;
        p = p->next->next;
    }
    FindMidElm(L2);
    EndFind(L2,2);
}