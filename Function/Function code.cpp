#include "iostream"
#include "conio.h"

using namespace std;

//I PUTU GEDE BAYU RADITYA PRATAMA
//BD203
//200030409
//TUGAS ALPRO2 FUNCTION

double total;

void grade_nilai(double total) {
	if (total >= 86 && total <= 100) {
		cout << "grade nilai anda : " << "A";
	}if (total >= 71 && total <= 85) {
		cout << "grade nilai anda : " << "B";
	}if (total >= 56 && total <= 70) {
		cout << "grade nilai anda : " << "C";
	}if (total >= 45 && total <= 55) {
		cout << "grade nilai anda : " << "D";
	}if (total <= 45) {
		cout << "grade nilai anda : " << "E";
	}
	cout << endl;

}

void ppkn(double total) {
	double ppkn;
	cout << "masukan nilai ppkn : ";
	cin >> ppkn;
	cout << "\n";
	if (ppkn > 90 && total >= 86 && total <= 100) {
		cout << "anda layak mendapatkan nilai A";
	}
	else if (ppkn > 71 && total >= 71 && total <= 85) {
		cout << "anda layak mendapatkan nilai B";
	}
	else if (ppkn > 61 && total >= 56 && total <= 70) {
		cout << "anda layak mendapatkan nilai C";
	}
	else if (ppkn > 56 && total >= 45 && total <= 55) {
		cout << "anda layak mendapatkan nilai D";
	}
	else if (ppkn > 50 && total <= 45) {
		cout << "anda layak mendapatkan nilai E";
	}
	else { cout << "anda tidak layak mendapatkan nilai tersebut"; }
}

int perhitungan(double tugas, double absen, double quis, double uts, double uas) {

	double total, n_tugas, n_absen, n_quis, n_uts, n_uas;

	n_tugas = tugas * 0.1;
	n_absen = absen * 0.1;
	n_quis = quis * 0.15;
	n_uts = uts * 0.25;
	n_uas = uas * 0.40;
	total = n_tugas + n_absen + n_quis + n_uts + n_uas;

	cout << "perhitungan : " << endl;
	cout << "nilai tugas : " << tugas << " * " << " 10% " << " = " << n_tugas << endl;
	cout << "nilai absen: " << absen << " * " << " 10% " << " = " << n_absen << endl;
	cout << "nilai quis : " << quis << " * " << " 15% " << " = " << n_quis << endl;
	cout << "nilai uts : " << uts << " * " << " 25% " << " = " << n_uts << endl;
	cout << "nilai uas : " << uas << " * " << " 40% " << " = " << n_uas << endl;
	cout << "========================================================================" << endl;
	cout << "total : " << total << endl;

	return(total);
}



int main() {
	double tugas, absen, quis, uts, uas;

	cout << "masukkan nilai tugas : ";
	cin >> tugas;
	cout << "masukan nlai absen : ";
	cin >> absen;
	cout << "masukan nilai quis : ";
	cin >> quis;
	cout << "masukan nilai uts : ";
	cin >> uts;
	cout << "masukan nilai uas : ";
	cin >> uas;
	cout << endl;

	total = perhitungan(tugas, absen, quis, uts, uas);
	grade_nilai(total);
	ppkn(total);

	_getch;
	return 0;
}
