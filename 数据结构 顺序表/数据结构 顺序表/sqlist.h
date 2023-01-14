#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int datetype;
typedef struct sqlist {
	datetype* p;
	int size;
	int capacity;
}sqlist;

void SeqListPushBack(sqlist* ps, datetype x);
void SeqListPrint(sqlist* ps);
void SeqListInit(sqlist* ps);
void SeqListDel(sqlist* ps, int x);
void SeqListPush(sqlist* ps, datetype x, int y);