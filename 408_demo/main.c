
#include<stdio.h>
#include<stdlib.h>
#include "./common/linkList.h"
int main()
{
    LinkHead L;
    Init(&L);
    const int SIZE = 5;
    int a[SIZE] = {10,20,30,50,10};
    for(int i = 0;i < SIZE; i++) {
        Insert(&L,a[i],1);
    }
    printf("原数组:");
    Traverse(L);
    printf("\n新数组：");
    return 0;
}