#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int datetype;
typedef struct Stack
{
	datetype* a;
	int top;//头
	int capacity;//容量
}st;

void StackIint(st* ps);
void StackDestory(st* ps);
//入栈
void StackPush(st* ps,datetype x);
//出栈
void Stackpop(st* ps);

datetype StackTop(st* ps);

int StackSize(st* ps);

bool StackEmpty(st* ps);

void StackBuy(st* ps);