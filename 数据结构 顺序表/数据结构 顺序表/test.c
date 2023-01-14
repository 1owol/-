#include "sqlist.h"

int main() {
	sqlist sq;
	SeqListInit(&sq);
	SeqListPushBack(&sq,3);
	SeqListPushBack(&sq, 3);
	SeqListPushBack(&sq, 3);
	SeqListPushBack(&sq, 3);
	SeqListPrint(&sq);
	SeqListPush(&sq, 20, 2);
	SeqListPrint(&sq);
	SeqListDel(&sq, 2);
	SeqListPrint(&sq);
	return 0;
}