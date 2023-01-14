#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int datetype;
typedef struct sqlist {
	struct sqlist* prev;
	struct sqlist* next;
	datetype date;
}sqlist;

void DoubleListIinit(sqlist** head);
sqlist* DoubleListBuy(datetype x);
void DoubleListPrint(sqlist* head);
void DoubleListPushBack(sqlist* head, datetype x);
int DoubleListSearch(sqlist* head, datetype x);
void DoubleListInsert(sqlist* head, datetype x, int y);