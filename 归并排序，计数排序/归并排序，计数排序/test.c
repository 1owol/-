#include"sort.h"
int main() {
	int a[] = { 4,2,1,8,7,5,6,3,9 };
	//int a[] = {9,4,33,5,8,6,7,20,14,25,33,13,11,31 };
	//int a[] = { 9,7,6,2,1,5,3,4,9,10 };
	//MergeSort(a, sizeof(a)/sizeof(int));
	//CountingSort(a, sizeof(a) / sizeof(int));
	MergeSort1(a, sizeof(a) / sizeof(int));
	return 0;
}