#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datetype1;
typedef struct QueueNode {
	struct QueueNode* next;
	datetype1 data;
}qu;

typedef struct Queue {
	struct QueueNode* head;
	struct QueueNode* tail;
}Queue;

void QueueInit(Queue* ps);
void QueueDestory(Queue* ps);
//入队列
void QueuePush(Queue* ps,datetype1 x);
//出队列
void QueuePop(Queue* ps);

datetype1 QueueFront(Queue* ps);
datetype1 QueueBack(Queue* ps);

int QueueSize(Queue* ps);

bool QueueEmpty(Queue* ps);