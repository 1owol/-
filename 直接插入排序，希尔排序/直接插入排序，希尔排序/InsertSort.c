#include"InsertSort.h"
//ÉıĞòÖ±½Ó²åÈëÅÅĞò
void DirectSort(int* a,int n) {
	int i;
	int end;
	for (i = 0; i < n - 1; ++i) {
		int temp = a[i+1];
		end = i;
		while (end >= 0 ) {
			if (a[end ] > temp) {
				a[end+1] = a[end];
				end--;
			}
			else {
				break;
			}
			a[end+1] = temp;
		}
	}
}
//Ï£¶ûÅÅĞò
void SteelSort(int* a, int n) {
	int i;
	int end;
	int gap=n;
	while (gap != 1) {
		gap = gap/ 2;
		for (i = 0; i < n - gap; ++i) {
			int temp = a[i + gap];
			end = i;
			while (end >= 0) {
				if (a[end] > temp) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
				a[end + gap] = temp;
			}
		}
	}
}

void test(int* a, int n) {
	int i = 0;

	for (i = 0; i < n - 1; i++) {
		int temp = a[i + 1];
		int end = i;
		while (end >= 0) {
			if (a[end] > temp) {
				a[end + 1] = a[end];
				end--;
			}
			else {
				break;
			}
		}
		a[end + 1] = temp;
	}
}