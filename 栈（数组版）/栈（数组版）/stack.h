#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int datetype;
typedef struct Stack
{
	datetype* a;
	int top;//ͷ
	int capacity;//����
}st;

void StackIint(st* ps);
void StackDestory(st* ps);
//��ջ
void StackPush(st* ps,datetype x);
//��ջ
void Stackpop(st* ps);

datetype StackTop(st* ps);

int StackSize(st* ps);

bool StackEmpty(st* ps);

void StackBuy(st* ps);