//
// Created by Elderly on 2021/9/21.
//

#include "string.h"
int InitString(SString *t,char s[], int length){
    for (int i = 0; i < length; i++) {
        t->ch[i] = s[i];
    }
    t->length = length;
    return 0;
};
