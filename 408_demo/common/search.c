//
// Created by Elderly on 2021/9/21.
//

#include "search.h"
#include "string.h"

/*
 * 算法名称：折半查找
 * 适用于：有序的顺序表
 * */
int Binary_Search(SqList L, int key){
    int mid,low = 0,height = L.length -1;
    while (low <= height) {
        mid = (low + height) / 2;
        if (L.data[mid] == key) return mid;
        else if (L.data[mid] > key) height = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

/*
 * 算法名称：模式串简单匹配
 * 适用于：字符串
 * */
int Index(SString S,SString T) {
    int i = 0,j = 0;
    while (i < S.length && j < T.length) {
        if (S.ch[i] == T.ch[j]) {
            i++;j++;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }
    //  匹配成功
    if (j >= T.length) return i - T.length + 1;
    //  匹配失败
    else return -1;
};