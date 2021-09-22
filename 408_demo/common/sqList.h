//
// Created by Elderly on 2021/9/21.
//

#ifndef INC_408_DEMO_SQLIST_H
#define INC_408_DEMO_SQLIST_H
#define InitSize 100
typedef struct {
    int *data;
    int MaxSize,length;
} SqList;
int InitSqList(SqList *L);
int InsertSqList(SqList *L,int index, int elm);
int DeleteSqList(SqList *L,int index, int elm);
int OutPutSqList(SqList L);
int SqListFindElmByValue(SqList L,int elm);
int SqListSituReplace(SqList L);
#endif //INC_408_DEMO_SQLIST_H
