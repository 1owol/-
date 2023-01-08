#include "sqlist.h"

void SeqListInit(sqlist* ps)
{
	ps->p=(datetype*)malloc(2*sizeof(datetype));
	ps->size = 0;
	ps->capacity = 2;
}

void SeqListPushBack(sqlist* ps, datetype x)
{
	if (ps->size == ps->capacity) {
		datetype* temp = realloc(ps->p, ps->capacity * 2 * sizeof(datetype));
		if (temp == NULL)
		{
			printf("realloc fail\n");
			return;
		}
		else {
			ps->p = temp;
			ps->capacity = ps->capacity * 2;
			printf("realloc successful\n");
		}
	}
	ps->p[ps->size] = x;
	ps->size++;
}
void SeqListPrint(sqlist* ps) {
	int i=0;
	for (i = 0; i < ps->size; i++) {
		printf("%d", ps->p[i]);
	}
	printf("\n");
}
//删除第x位数据
void SeqListDel(sqlist* ps, int x) 
{
	int head = x;
	while (head < ps->size)
	{
		ps->p[head - 1] = ps->p[head];
		++head;
	}
	ps->size--;

}
//在第x位插入数据
void SeqListPush(sqlist* ps,datetype x,int y)
{
	int end = ps->size;
	while(end>=y-1)
	{
		ps->p[end + 1] = ps->p[end];
		--end;
	}
	ps->p[y - 1] = x;
	ps->size++;
}