//
// Created by Elderly on 2021/9/24.
//

#include <stdlib.h>
#include <printf.h>
#include "queue.h"

//创建空队列 QueueCapacity-队列容量
int InitQueue(Queue *PQueue,int QueueCapacity) {
//    Queue *PQueue = (Queue *)malloc(sizeof(Queue));
    PQueue -> pBase = (int *)malloc(sizeof (int) * QueueCapacity);
    if (!PQueue -> pBase) {
        printf("队列内存分配失败");
        return -1;
    }
    PQueue -> front = 0;
    PQueue -> rear = 0;
    PQueue -> maxSize = QueueCapacity;
//    _PQueue = PQueue;
    return 1;
};

//销毁队列
int DestroyQueue(Queue *PQueue) {
    free(PQueue);
    PQueue = NULL;
    return 1;
};

//清空队列
int ClearQueue(Queue *PQueue) {
    PQueue -> front = 0;
    PQueue -> rear = 0;
    return 1;
};

//判断队列是否为空
int IsEmpityQueue(Queue *PQueue) {
    return PQueue -> front == PQueue -> rear ? 1 : 0;
};

//判断队列是否为满
int IsFullQueue(Queue *PQueue) {
    return (PQueue -> rear + 1) % PQueue -> maxSize == PQueue-> front ? 1 : 0;
};

//获得队列长度
int GetQueueLength(Queue *PQueue) {
    return (PQueue -> rear - PQueue -> front + PQueue -> maxSize) % PQueue -> maxSize;
};

//新元素入队 [先进先出原则：在队尾的位置插入] element-要插入元素
int EnQueue(Queue *PQueue,ElemType element) {
    if (IsFullQueue(PQueue)) {
        printf("队列已满");
        return -1;
    }
    PQueue -> pBase[PQueue -> rear] = element;
    PQueue -> rear = (PQueue -> rear + 1) % PQueue->maxSize;
    return 1;
};

//新元素出队,同时保存出队的元素 [先进先出原则：在队头的位置删除]
int DeQueue(Queue *PQueue,ElemType *pElement) {
    if (IsEmpityQueue(PQueue)) {
        printf("队列为空");
        return -1;
    }
    *pElement = PQueue->pBase[PQueue->front];
    PQueue->front = (PQueue->front + 1) % PQueue->maxSize;
    return 1;
};
//遍历队列
int QueueTraverse(Queue PQueue) {
    int i = PQueue.front;
    while (i != PQueue.rear) {
        printf("%d ",PQueue.pBase[i]);
        i = (i + 1) % PQueue.maxSize;
    }
    return 1;
};
