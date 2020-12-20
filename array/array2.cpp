#include "iostream"
#include "conio.h"

using namespace std;

//I Putu Gede Bayu Raditya Pratama
//BD203
//200030409

int main() {

	int baris, kolom;
	cout << "Masukkan Baris : ";
	cin >> baris;
	cout << "Masukkan Kolom : ";
	cin >> kolom;
	cout << "\n";
	int A[99][99];

	for (int i = 0; i < kolom; i++) {
		for (int j = 0; j < baris; j++) {
			cout << "Masukkan Elemen A[" << i << "][" << j << "] : ";
			cin >> A[i][j];
		}
		cout << "\n";
	}

	cout << "Matrix A" << endl;
	for (int k = 0; k < kolom; k++) {
		for (int l = 0; l < baris; l++) {
			cout << A[k][l] << "\t";
		}cout << endl;

	}

	int total_diagonal1 = 0;
	cout << "Total Diagonal" << endl;
	for (int l = 0; l < kolom; l++) {
		for (int m = 0; m < baris; m++) {
			if (l == m) {
				cout << A[l][m] << ',';
				total_diagonal1 += A[l][m];
			}
		}
	}cout << " = " << total_diagonal1;

	cout << endl;

	int total_diagonal2 = 0;
	int batas_kolom = 0;
	int baris2 = baris - 1;
	for (int n = 0; n < kolom; n++) {
		cout << A[n][baris2] << ",";
		total_diagonal2 += A[n][baris2];
		baris2--;

	}
	cout << " = " << total_diagonal2;

	_getch;
	return 0;
}
