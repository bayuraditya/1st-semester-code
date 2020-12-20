#include "iostream"
#include "conio.h"

using namespace std;

//I PUTU GEDE BAYU RADITYA PRATAMA
//BD203
//200030409
//mengurutkan array dengan metode selection sort

void Selection_sort(int DataArray[], int  jmlData) {
	int min = 0;
	int temp = 0;

	for (int i = 0; i <= jmlData - 2; i++) {
		min = i;
		for (int j = i + 1; j <= jmlData - 1; j++) {
			if (DataArray[min] > DataArray[j]) {
				min = j;
			}
		}
		if (min != i) {
			temp = DataArray[min];
			DataArray[min] = DataArray[i];
			DataArray[i] = temp;
		}
	}
}

int main() {
	int A[] = { 8,5,3,2,1,4,6,5,1,2,4,9 };
	int jum = 12;
	Selection_sort(A, jum);

	for (int k = 0; k < jum; k++) {
		cout << A[k];
		if (k < jum - 1) {
			cout << ", ";

		}

	}

	_getch;
	return 0;
}

