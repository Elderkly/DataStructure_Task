//
// Created by Elderly on 2021/9/22.
//

#ifndef INC_408_DEMO_SORT_H
#define INC_408_DEMO_SORT_H

#include "sqList.h"

int InsertSort(SqList L);
int BubbleSort(SqList L);
int QuickSort(SqList L);
int MainQuickSort(SqList L, int low, int height);
int Partition(SqList L, int low, int height);

int MergeSort(SqList L);
int MainMergeSort(SqList L,int low, int height);
int ArrayMerge(SqList L,int low, int height, int mid);
#endif //INC_408_DEMO_SORT_H
