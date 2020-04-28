#include <iostream>
using namespace std;
void fungsi(double angka1, double angka2){
	cout << "penjumlahan " << (angka1 + angka2) << endl;
	cout << "pengurangan " << (angka1 - angka2) << endl;
	cout << "perkalian   " << (angka1 * angka2) << endl;
	cout << "pembagian   " << (angka1 / angka2) << endl;
}
int main(){
	double angka1, angka2;	
	cout << "masukan angka pertama >> "; cin >> angka1;
	cout << "masukan angka kedua >> "; cin >> angka2;
	cout << endl;
	fungsi( angka1,  angka2);
}
