#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"stack.h"
typedef struct Queue {
	st* stack1;//入数据用
	st* stack2;//出数据用
}qu;

void QueueIint(qu* ps);
void QueuePush(qu* ps, datetype x);
void QueuePop(qu* ps);
int QeueuSize(qu* ps);