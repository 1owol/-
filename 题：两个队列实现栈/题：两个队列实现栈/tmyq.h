#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"queue.h"
typedef struct Stack {
	Queue* qu1;
    Queue* qu2;
}st;

void StackInit(st* ps);
void StackPush(st* ps, datetype x);
void StackPop(st* ps);