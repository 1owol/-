#include"double.h"

void DoubleListIinit(sqlist** head)
{
	*head = (sqlist*)malloc(sizeof(sqlist));
	(*head)->date = 0;
	(*head)->next = (*head);
	(*head)->prev = (*head);
}

sqlist* DoubleListBuy(datetype x)
{
	sqlist* temp = (sqlist*)malloc(sizeof(sqlist));
	temp->date = x;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}
 
int DoubleListSearch(sqlist* head, datetype x)
{
	sqlist* tail = head;
	int count = 0;
	while (tail->date != x) {
		tail = tail->next;
		count++;
		if (tail == head) {
			printf("����ʧ��");
			return -1;
		}
	}
	printf("���ҳɹ�");
	return count;
}
//β��
void DoubleListPushBack(sqlist* head, datetype x)
{
	sqlist* tail = DoubleListBuy(x);
	sqlist* end = head->prev; 
	end->next = tail;
	tail->next = head;
	head->prev = tail;
}
//��ʾ
void DoubleListPrint(sqlist* head)
{
	sqlist* tail = head;
	do {
		printf("%d", tail->date);
		tail = tail->next;
		if (tail != head) {
			printf("->");
		}
	} while (tail!=head);
	printf("\n");
}
//��yλ�ú����
void DoubleListInsert(sqlist* head, datetype x, int y) 
{
	sqlist* new = DoubleListBuy(x);
	sqlist* tail = head;
	int i = 0;
	for (i = 0; i < y; i++) {
		tail = tail->next;
	}
	new->next = tail->next;
	tail->next->prev = new;
	new->prev = tail;
	tail->next = new;
}