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
//�����
void QueuePush(Queue* ps,datetype x);
//������
void QueuePop(Queue* ps);

datetype QueueFront(Queue* ps);
datetype QueueBack(Queue* ps);

int QueueSize(Queue* ps);

bool QueueEmpty(Queue* ps);