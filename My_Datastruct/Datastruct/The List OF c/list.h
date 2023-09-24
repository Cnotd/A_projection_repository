//
// Created by 23576 on 2023/5/24.
//
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define STLtype int

typedef struct list
{
    STLtype a;
    int siz ;
    struct list * pre  ;
    struct list * next ;

}list;


void Init(list * HD , list * TL);

void print( list * head ,  list * tail , int * siz);//传入头部结点和尾部结点的指针

void push_front(list * head , list * tail , int x,int * siz);

void push_back(list * head , list * tail , int x,int * siz);

void clear(list * head , list * tail , int * siz);

void clear_case(list * head , list * tail , int * siz,int k);