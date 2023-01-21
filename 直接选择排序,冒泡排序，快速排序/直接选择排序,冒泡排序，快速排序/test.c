#include"sort.h"
int main() {
	//int a[] = { 2,3,1,4,6,5,8,7 };
	//int a[] = { 8,7,6,5,4,3,2,1 };
	//int a[] = { 8,7,6,1,3,4,5,2 };
	//int a[] = { 6,1,2,3,4,9,8,5 };
	
	//int a[] = { 1,3,10,9,7,8,2,4,6,5 };
	int a[] ={2,4,9,7,10,5,1,2,4,6,8,3,7,11,21,31,29,15,0};
	//int a[] = { 1,2,3 };
	//int a[] = { 3,5,4 };
	//StraightSelectSort(a, 10);
    //BubbleSort(a, 6);
	QuickSort3(a, 0, (sizeof(a)/sizeof(int))-1);
	//printf("%d",MidNumber(a, 0, (sizeof(a) / sizeof(int)) - 1));
	return 0;
}