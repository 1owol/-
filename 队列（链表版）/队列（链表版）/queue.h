#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datetype;
typedef struct QueueNode {
	struct QueueNode* next;
	datetype data;
}qu;

typedef struct Queue {
	qu* head;
	qu* tail;
}Queue;

void QueueInit(Queue* ps);
void QueueDestory(Queue* ps);
//入队列
void QueuePush(Queue* ps,datetype x);
//出队列
void QueuePop(Queue* ps);

datetype QueueFront(Queue* ps);
datetype QueueBack(Queue* ps);

int QueueSize(Queue* ps);

bool QueueEmpty(Queue* ps);