//
// Created by Elderly on 2021/9/22.
//

#include <printf.h>
#include <stdlib.h>
#include "sort.h"
//
// Created by Elderly on 2021/9/21.
//

/*
 * 算法名称：折半插入排序
 * 适用于：顺序表
 * **/
int InsertSort(SqList L) {
    int i,j,mid,low,height;
    for (i=1; i < L.length; i++) {
        int temp = L.data[i];
        /**直接插入排序**/
//        //  从后往前找第一个适合插入的位置即data[i]>data[j]的位置
//        for (j= i - 1; temp < L.data[j]; j--) {
//            L.data[j+1] = L.data[j];
//        }
//        L.data[j + 1] = temp;
        /**折半插入排序**/
        low = 0;
        height = i - 1;
        //  找到当前元素应该插入的位置
        while(low <= height) {
            mid = (low + height) / 2;
            if (L.data[mid] <= temp) low = mid + 1;
            else height = mid - 1;
        }
        OutPutSqList(L);
        //  将待插入位置之后的元素都往后移动一位 腾出位置
        for (j = i - 1; j > height; --j) {
            L.data[j + 1] = L.data[j];
        }
        //  插入元素
        L.data[height + 1] = temp;
        OutPutSqList(L);
    }
    return 0;
}

/*
 * 算法名称：冒泡排序
 * 适用于：顺序表
 * */
int BubbleSort(SqList L) {
    int tab = 0;
    for (int i = 0; i < L.length; i++) {
        tab = 0;
        for (int j = L.length - 1; j > i; j--) {
            if (L.data[j-1] > L.data[j]) {
                int temp = L.data[j];
                L.data[j] = L.data[j-1];
                L.data[j-1] = temp;
                tab = 1;
            }
        }
        if (tab == 0) return 0;
    }
    return 0;
}

/*
 * 算法名称：快速排序
 * 适用于：顺序表
 * */
int QuickSort(SqList L) {
    return MainQuickSort(L,0,L.length - 1);
}
//  快速排序-将原表划分为两个子表
int MainQuickSort(SqList L, int low, int height) {
    if (low < height) {
        int index = Partition(L,low,height);
        MainQuickSort(L,low, index - 1);
        MainQuickSort(L,index + 1,height);
    }
    return 0;
}
//  确定中间元素的最终位置
int Partition(SqList L, int low, int height) {
    int baseElm = L.data[low];
    while(low < height) {
        while(low < height && L.data[height] >= baseElm) height--;
        L.data[low] = L.data[height];
        while(low < height && L.data[low] <= baseElm) low++;
        L.data[height] =L.data[low];
    }
    L.data[low] = baseElm;
    return low;
}

/*
 * 算法名称：二路归并排序
 * 适用于：顺序表
 * */
int MergeSort(SqList L) {
    return MainMergeSort(L,0,L.length-1);
}
int MainMergeSort(SqList L,int low, int height){
    if (low < height) {
        int mid = (low + height) / 2;
        MainMergeSort(L, low, mid);
        MainMergeSort(L, mid + 1, height);
        ArrayMerge(L,low,height,mid);
    }
    return 1;
}
int ArrayMerge(SqList L,int low, int height, int mid) {
    //  生成辅助数组
    int *B = (int *)malloc((height - low) * sizeof(int));
    int i,j,k;
    //  复制元素到辅助数组中
    for (k = low; k <= height; k++) {
        B[k]=L.data[k];
    }
    //  对两个子表同时进行遍历，筛选出两个子表中相对较小的一个复制到原数组中
    for (i = low, j = mid + 1,k = i; i <= mid && j <=height; k++) {
        L.data[k] = B[i] <= B[j] ? B[i++] : B[j++];
    }
    //  其中一个子表遍历完成 将另外一个子表剩余的内容直接赋值到原数组中
    while(i <= mid) L.data[k++] = B[i++];
    while(j <= height) L.data[k++] = B[j++];
    return 1;
}

