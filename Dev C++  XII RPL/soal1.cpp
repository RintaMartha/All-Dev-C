#include <iostream>
using namespace std;

int main(){
	int nomorKartuPresensi;
	
	cout << "Masukan nomor kartu presensi: ";
	cin >> nomorKartuPresensi;
	
	if(nomorKartuPresensi == 1) {
	  cout <<"Siswa Kelas X" << endl;
	} else if (nomorKartuPresensi == 2) {
		cout <<"Siswa kelas XI" << endl;
	} else if (nomorKartuPresensi == 3){
		cout << "Siswa Kelas XII" << endl;
	} else{
		cout << "Nomor kartu presensi tidak valid" << endl;
	}
	return 0;
}
