//
// Created by Elderly on 2021/9/24.
//

#ifndef INC_408_DEMO_QUEUE_H
#define INC_408_DEMO_QUEUE_H

typedef int ElemType;   //宏定义队列的数据类型
#define MAX_SIZE 20
typedef struct
{
    ElemType *pBase;    //数组指针
    ElemType front;      //队头索引
    ElemType rear;       //队尾索引
    int maxSize;    //当前分配的最大容量
}Queue;

//创建空队列 QueueCapacity-队列容量
int InitQueue(Queue *PQueue,int QueueCapacity);
//销毁队列
int DestroyQueue(Queue *PQueue);
//清空队列
int ClearQueue(Queue *PQueue);
//判断队列是否为空
int IsEmpityQueue(Queue *PQueue);
//判断队列是否为满
int IsFullQueue(Queue *PQueue);
//获得队列长度
int GetQueueLength(Queue *PQueue);
//新元素入队 [先进先出原则：在队尾的位置插入] element-要插入元素
int EnQueue(Queue *PQueue,ElemType element);
//新元素出队,同时保存出队的元素 [先进先出原则：在队头的位置删除]
int DeQueue(Queue *PQueue,ElemType *pElement);
//遍历队列
int QueueTraverse(Queue PQueue);

#endif //INC_408_DEMO_QUEUE_H
