
#include<stdio.h>
#include<stdlib.h>
#include "./common/linkList.h"
#include "./common/string.h"
#include "./common/sqList.h"
#include "./common/search.h"
#include "./common/sort.h"
#include "./common/queue.h"
int main()
{
    /***顺序表***/
//    SqList S;
//    InitSqList(&S);
//    int data[10] = {0,22,1,5,-1,9,2,10,11,13};
//    for (int i = 0; i < 10; i++) {
//        InsertSqList(&S, i+1, data[i]);
//    }
//    int deleteElm;
//    printf("元素5在第%d个位置", SqListFindElmByValue(S,5));
//    DeleteSqList(&S,5, deleteElm);
//    OutPutSqList(S);
//    printf("元素5在第%d个位置\n", SqListFindElmByValue(S,5));
//    SqListSituReplace(S);
//    OutPutSqList(S);

    /***单链表***/
    //  原地置换
//    LinkHead L;
//    InitLinkList(&L,1);
//    const int SIZE = 5;
//    int a[SIZE] = {10,20,30,50,60};
//    for(int i = 0;i < SIZE; i++) {
//        Insert(&L,a[i],i + 1);
//    }
//    printf("原数组:\n");
//    Traverse(L);
//    printf("\n新数组:\n");
//    SituReplace(&L);
//    Traverse(L);
//
//    //双指针
//    LinkHead L2;
//    InitLinkList(&L2,1);
//    int b[SIZE] = {1,2,10,4,5};
//    for(int i = 0;i < SIZE; i++) {
//        Insert(&L2,b[i],i + 1);
//    }
//    FindMidElm(L2);
//    EndFind(L2,2);

    /**模式串匹配**/
//    SString T1;
//    SString T2;
//    char a[14] = {'a','b','c','d','g','o','o','d','g','o','o','g','l','e'};
//    char b[6] = {'g','o','o','g','l','e'};
//    InitString(&T1,a,14);
//    InitString(&T2,b,6);
//    printf("模式串匹配结果%d", Index(T1,T2));

    /**查找算法**/
//     折半查找
//    printf("元素0在第%d个位置", Binary_Search(S,0) + 1);

    /**排序算法**/
    //  插入排序
//    InsertSort(S);
//    printf("\n插入排序后的数组");
//    OutPutSqList(S);
//    //  冒泡排序
//    BubbleSort(S);
//    printf("\n冒泡排序后的数组");
//    OutPutSqList(S);
    //  快速排序
//    QuickSort(S);
//    OutPutSqList(S);
    //  归并排序
//    MergeSort(S);
//    OutPutSqList(S);

    //  队列
    int value;          //用于保存出队的元素
    //创建队列对象
    Queue PQueue;

    //调用初始化队列的函数
    InitQueue(&PQueue,20);
    //调用出队函数
    EnQueue(&PQueue, 1);
    EnQueue(&PQueue, 2);
    EnQueue(&PQueue, 3);
    EnQueue(&PQueue, 4);
    EnQueue(&PQueue, 5);
    EnQueue(&PQueue, 6);
    EnQueue(&PQueue, 7);
    EnQueue(&PQueue, 8);
    //调用遍历队列的函数
    QueueTraverse(PQueue);
    //调用出队函数
    if(DeQueue(&PQueue, &value))
    {
        printf("出队一次，元素为：%d\n", value);
    }
//    QueueTraverse(PQueue);
    if(DeQueue(&PQueue, &value))
    {
        printf("出队一次，元素为：%d\n", value);
    }
    printf("\n");
    QueueTraverse(PQueue);

    DestroyQueue(&PQueue);

    return 0;
}