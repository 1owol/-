#include "stack.h"

void StackIint(st* ps) {

	ps->a = NULL;
	datetype* temp = (datetype*)malloc(2 * sizeof(datetype));
	if (temp == NULL) {
		printf("初始化失败！");
		return;
	}
	ps->a = temp;
	ps->top = -1;
	ps->capacity = 2;
	
}

//销毁
void StackDestory(st* ps) {
	free(ps->a);
}

//入栈
void StackPush(st* ps, datetype x) {

	StackBuy(ps);
	ps->top++;
	ps->a[ps->top] = x;

}
//出栈
void Stackpop(st* ps) {
	printf("%d  ", ps->a[ps->top]);
	ps->top--;
}
//获取最顶上的数
datetype StackTop(st* ps) {
	return ps->a[ps->top];
}
//获取数组中数的个数
int StackSize(st* ps) {
	return (ps->top+1);
}
//判空
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
			printf("增容失败！");
			return;
		}
		ps->a = temp;
		ps->capacity *= 2;
	}
}