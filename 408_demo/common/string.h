//
// Created by Elderly on 2021/9/21.
//

#ifndef INC_408_DEMO_STRING_H
#define INC_408_DEMO_STRING_H
#define MAXLEN 255
typedef struct {
    char ch[MAXLEN];
    int length;
} SString;
int InitString(SString *t,char s[],int length);
int Index(SString S,SString T);
#endif //INC_408_DEMO_STRING_H
