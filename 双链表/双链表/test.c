#include"double.h"

int main() {
	
	sqlist* plist = NULL;
	DoubleListIinit(&plist);
    DoubleListPushBack(plist, 1);
	DoubleListPushBack(plist, 2);
	DoubleListPushBack(plist, 3);
	DoubleListPrint(plist);
	DoubleListInsert(plist, 20,2);
	DoubleListPrint(plist);


	return 0;

}