//
// Created by Elderly on 2021/9/19.
//
#include<stdio.h>
#include<stdlib.h>
#ifndef INC_408_DEMO_LINKLIST_H
#define INC_408_DEMO_LINKLIST_H
typedef struct node{
    int elem;
    struct node *next;
}DataNode;

typedef struct {
    int count;
    DataNode *next;
}*LinkHead,LinkNode;
int Init(LinkHead *L);
int Insert(LinkHead *L,int elem,int pos);
int Delete(LinkHead *L,int *elem,int pos);
int Clear(LinkHead *L);
int Destory(LinkHead *L);
int Traverse(LinkHead L);
#endif //INC_408_DEMO_LINKLIST_H
