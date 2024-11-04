#include <iostream>
using namespace std;

int main() {
	int motor, mobil, jamMasuk, jamKeluar;
	cout << "Masukkan jumlah motor: "; cin >> motor;
	cout << "Masukkan jumlah mobil: "; cin >> mobil;
	cout << "Input jam masuk (format  24 jam): "; cin >> jamMasuk;
	cout << "Input jam keluar (format  24 jam): "; cin >> jamKeluar;

	//biaya parkir
	int parkirMobil = 5000;
	int parkirMotor = 2000;

	//menghitung durasi parkir
	int totalJam;
	if (jamMasuk <= jamKeluar) {
		totalJam = jamKeluar - jamMasuk;
	}
	else {
		totalJam = (24 - jamMasuk) + jamKeluar;
	}

	int totalBiaya = ((motor * parkirMotor) + (mobil * parkirMobil)) * totalJam;
	cout << "\nTotal biaya parkir: Rp. " << totalBiaya << " (" << totalJam << " jam)";
	return 0;
}