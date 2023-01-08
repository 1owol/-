#include "list.h"
int main() {
	list* phead = NULL;;
	PushBackList(&phead, 1);
	PushBackList(&phead, 2);
	PushBackList(&phead, 3);
	PrintList(phead);
	PushFrontList(&phead, 3);
	PrintList(phead);
	PushList(&phead, 20, 3);
	PrintList(phead);
	PushReList(&phead,10, 20);
	PrintList(phead);
	return 0;
}