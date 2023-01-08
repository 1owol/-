#include "list.h"



void PrintList(list* p) 
{
	list* temp = p;
	while (temp != NULL) {
		printf("%d->", temp->date);
		temp = temp->next;
		
	}
	printf("NULL\n");
}
//β��
void PushBackList(list** p, datetype x)
{
	list* temp= (list*)malloc(sizeof(list));
	if (temp == NULL) { return; }
	temp->next = NULL;
	temp->date = x;
	if (*p==NULL) {
		*p = temp;
	}
	else {
		list* tail = *p;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = temp;
	}
}
//ͷ��
void PushFrontList(list** p, datetype x)
{
	list* temp = (list*)malloc(sizeof(list));
	if (temp == NULL) { return; }
	temp->next = NULL;
	temp->date = x;
	list* tail = *p;
	*p = temp;
	temp->next = tail;
}
//��yλ�ò���
void PushList(list** p, datetype x, int y)
{
	list* temp = (list*)malloc(sizeof(list));
	if (temp == NULL) { return; }
	temp->next = NULL;
	temp->date = x;
	list* tail = *p;

	int i = 0;
	list* per = NULL;
	for (i = 0; i < (y-1);i++) {
		per = tail;
		tail = tail->next;
	}
	per->next = temp;
	temp->next = tail;
}
//�滻��һ�γ��ֵĸ��ַ�
void PushReList(list** p, datetype x, datetype y)
{
	list* temp = (list*)malloc(sizeof(list));
	if (temp == NULL) { return; }
	temp->next = NULL;
	temp->date = x;

	list* tail = *p;
	list* per = NULL;
	do {
		per = tail;
		tail = tail->next;
	}while (tail->date!=y);
	per->next = temp;
	temp->next = tail->next;


}