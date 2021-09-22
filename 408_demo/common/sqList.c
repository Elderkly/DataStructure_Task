//
// Created by Elderly on 2021/9/21.
//

#include <stdlib.h>
#include <printf.h>
#include "sqList.h"

int InitSqList(SqList *L){
    L->data = (int *)malloc(sizeof (int)*InitSize);
    L->length = 0;
    L->MaxSize = InitSize;
    return 0;
}
/**
 * 功能：插入数据
 * 思路：将插入的位置后的数据全部向后移一位为新数据腾出空间后进行插入
 * */
int InsertSqList(SqList *L,int index, int elm){
    if (index < 1 || index > L->length + 1) {
        printf("非法下标");
        return -1;
    }
    if (L->length > L->MaxSize) {
        printf("数组已满");
        return -1;
    }
    for (int j = L->length; j >= index; j--) {
        L->data[j] = L->data[j-1];
    }
    L->data[index-1] = elm;
    L->length++;
    return 0;
}
/*
 * 功能：按下标删除数据
 * 思路：将第i个位置后的数据都往前挪一位覆盖掉要删除的数据
 * */
int DeleteSqList(SqList *L,int index, int elm){
    if (index < 1 || index > L->length) {
        printf("非法下标");
        return -1;
    }
    if (L->length == 0) {
        printf("表中没有数据");
        return -1;
    }
    elm = L->data[index-1];
    for (int i = index; i < L->length; i++) {
        L->data[i-1] = L->data[i];
    }
    L->length--;
    return 0;
}

//  输出表中元素
int OutPutSqList(SqList L){
    for (int i = 0; i< L.length; i++) {
        printf("%d ",L.data[i]);
    }
    printf("\n");
    return 0;
}

/*
 * 功能：按值查找元素
 * */
int SqListFindElmByValue(SqList L,int elm) {
    int returnIndex = -1;
    for(int i = 0; i < L.length; i++) {
        L.data[i] == elm ? returnIndex = i + 1 : NULL;
    }
    return returnIndex;
}

/*
 * 功能：原地逆置
 * 思路：将顺序的第i个元素跟导数的第i个元素互换位置
 * */
int SqListSituReplace(SqList L) {
    int temp;
    for (int i = 0; i < L.length / 2 ; i++) {
        temp = L.data[i];
        L.data[i] = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = temp;
    }
    return 0;
}