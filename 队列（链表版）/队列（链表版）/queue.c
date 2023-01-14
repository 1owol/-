#include"queue.h"

void QueueInit(Queue* ps) {
	ps->head = NULL;
	ps->tail = NULL;
}

//入队列
void QueuePush(Queue* ps, datetype x) {
	qu* temp = (qu*)malloc(sizeof(qu));
	if (temp == NULL) {
		printf("开辟空间失败！");
		return;
	}
	temp->data = x;
	temp->next = NULL;

	if (ps->head ==NULL) {
		ps->head = temp;
		ps->tail = temp;
		
	}
	else {
		ps->tail->next = temp;
		ps->tail = temp;
	}
}
//出队列
void QueuePop(Queue* ps) {

	if(ps->head->next==NULL){
		printf("%d", ps->head->data);
		free(ps->head);
		ps->head = NULL;
		ps->tail = NULL;
		
	}
	else {
		printf("%d", ps->head->data);
		qu* next = ps->head->next;
		free(ps->head);
		ps->head = next;
	}
}


datetype QueueFront(Queue* ps) {
	return ps->head->data;
}
datetype QueueBack(Queue* ps) {
	return ps->tail->data;
}

int QueueSize(Queue* ps){
	int size = 0;
	qu* cur = ps->head;
	while (cur) {
		++size;
		cur = cur->next;
	}
	return size;
}

bool QueueEmpty(Queue* ps) {
	if (ps->head == NULL)
		return true;
	return false;
}

void QueueDestory(Queue* ps) {
	qu* cur = ps->head;
	while (cur) {
		qu* next = cur->next;
		free(cur);
		cur = next;
		ps->head = NULL;
		ps->tail = NULL;
	}
}