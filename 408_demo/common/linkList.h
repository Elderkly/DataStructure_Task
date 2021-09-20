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
    DataNode *next2;
}*LinkHead,LinkNode;
int Init(LinkHead *L,int DoublePoint);
int Insert(LinkHead *L,int elem,int pos);
int Delete(LinkHead *L,int *elem,int pos);
int Clear(LinkHead *L);
int Destory(LinkHead *L);
int Traverse(LinkHead L);
int SituReplace(LinkHead *L);
int FindMidElm(LinkHead L);
int EndFind(LinkHead L,int k);
#endif //INC_408_DEMO_LINKLIST_H
