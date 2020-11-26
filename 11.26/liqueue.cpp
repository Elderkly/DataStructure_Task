//
// Created by Elderly on 2020/11/26.
//

# include <stdio.h>
# include <sys/malloc.h>
typedef char ElemType;
typedef struct DataNode{
    ElemType data;              //  数据域
    struct DataNode * next;     //  指针域
} DataNode;                     //  声明链队数据结点类型
typedef struct {
    DataNode * front;
    DataNode * rear;
} LinkQuNode;                   //  声明链队类型
void InitQueue(LinkQuNode * &q){   //  初始化
    q = (LinkQuNode *)malloc(sizeof(LinkQuNode));
    q -> front = q -> rear = NULL;
}
void DestroyQueue(LinkQuNode * &q){ // 摧毁
    DataNode * p = q -> front, * r;
    if (p != NULL) {
        r = p -> next;
        while (r != NULL) {
            free(p);
            p = r;
            r = p -> next;
        }
    }
    free(p);
    free(q);
}
bool QueueEmpty(LinkQuNode * s) {   // 判断队列空否
    return (s -> rear == NULL);
}
void enQueue(LinkQuNode * &q, ElemType e){//  进队
    DataNode * p;
    p = (DataNode * )malloc(sizeof(DataNode));
    p -> data = e;
    p -> next = NULL;
    if (q -> rear == NULL)              //  若链队为空 则新结点既是队首结点也是队尾结点
        q -> front = q -> rear = p;
    else {
        q -> rear -> next = p;
        q -> rear = p;
    }
}
bool deQueue(LinkQuNode *&q, ElemType &e) {//  出队
    DataNode * t;
    if (q -> rear == NULL)                  //  队列为空
        return false;
    t = q -> front;                         //  t指向第一个数据结点
   if (q -> front == q -> rear)             //  队列中只有一个结点时
       q -> front = q -> rear = NULL;
   else                                     //  队列中有多个结点时
       q -> front = q -> front -> next;
   e = t -> data;
   free(t);
   return true;
}
