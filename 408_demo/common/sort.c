//
// Created by Elderly on 2021/9/22.
//

#include <printf.h>
#include "sort.h"
//
// Created by Elderly on 2021/9/21.
//

/*
 * 功能：折半插入排序
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