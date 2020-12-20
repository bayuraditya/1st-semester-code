#include"iostream"
#include"conio.h"

using namespace std;

//I Putu Gede Bayu Raditya Pratama
//BD203
//200030409
//TUGAS ALPRO ARRAY 1

int main() {

	int n;
	cout << "Masukkan N : ";
	cin >> n;
	cout << "\n";

	int nilai[999];
	double total = 0;

	for (int i = 1; i <= n; i++) {
		cout << "Masukkan Nilai " << i << " : ";
		cin >> nilai[i];
		total += nilai[i];
	}

	double rata_rata = total / n;
	cout << "\nRata-rata : " << rata_rata << endl;
	cout << "\nNilai Lebih Besar dari " << rata_rata << " : ";

	for (int j = 1; j <= n; j++) {
		if (nilai[j] > rata_rata) {
			cout << nilai[j] << " , ";
		}
	}

	_getch;
	return 0;
}