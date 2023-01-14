#include "stack.h"

void StackIint(st* ps) {

	ps->a = NULL;
	datetype* temp = (datetype*)malloc(2 * sizeof(datetype));
	if (temp == NULL) {
		printf("��ʼ��ʧ�ܣ�");
		return;
	}
	ps->a = temp;
	ps->top = -1;
	ps->capacity = 2;
	
}

//����
void StackDestory(st* ps) {
	free(ps->a);
}

//��ջ
void StackPush(st* ps, datetype x) {

	StackBuy(ps);
	ps->top++;
	ps->a[ps->top] = x;

}
//��ջ
void Stackpop(st* ps) {
	printf("%d  ", ps->a[ps->top]);
	ps->top--;
}
//��ȡ��ϵ���
datetype StackTop(st* ps) {
	return ps->a[ps->top];
}
//��ȡ���������ĸ���
int StackSize(st* ps) {
	return (ps->top+1);
}
//�п�
bool StackEmpty(st* ps) {
	if (ps->top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void StackBuy(st* ps) {
	if ((ps->top + 1) == ps->capacity) {
		datetype* temp = NULL;
		temp = (datetype*)realloc(ps->a, ps->capacity * 2 * sizeof(datetype));
		if (temp == NULL) {
			printf("����ʧ�ܣ�");
			return;
		}
		ps->a = temp;
		ps->capacity *= 2;
	}
}