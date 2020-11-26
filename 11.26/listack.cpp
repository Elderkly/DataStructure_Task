//
// Created by Elderly on 2020/11/26.
//

# include <stdio.h>
# include <sys/malloc.h>
typedef char ElemType;
typedef struct linknode{
    ElemType data;              //  数据域
    struct linknode * next;     //  指针域
} LinkStNode;                   //  链栈类型定义
void InitStack(LinkStNode * &s){   //  初始化
    s = (LinkStNode *)malloc(sizeof(LinkStNode));
    s -> next = NULL;
}
void DestroyStack(LinkStNode * &s){ // 摧毁栈
    LinkStNode * p = s -> next;
    while (p != NULL) {
        free(s);
        s = p;
        p = p -> next;
    }
    free(s);
}
bool StackEmpty(LinkStNode * s) {   // 判断栈空否
    return (s -> next == NULL);
}
void Push(LinkStNode * &s, ElemType e){//  进栈
    LinkStNode * p;
    p = (LinkStNode * )malloc(sizeof(LinkStNode));
    p -> data = e;
    p -> next = s -> next;
    s -> next = p;
}
bool Pop(LinkStNode *&s, ElemType &e) {//  出栈
    LinkStNode * p;
    if (s -> next == NULL)
        return false;
    p = s -> next;
    e = p -> data;
    s -> next = p -> next;
    free(p);
    return true;
}
bool GetTop(LinkStNode * s, ElemType &e){//    取栈顶元素
    if (s -> next == NULL)
        return false;
    e = s -> next -> data;
    return true;
}
