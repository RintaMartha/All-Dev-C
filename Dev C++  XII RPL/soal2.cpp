#include <iostream>
#include <string>
using namespace std;

int main() {
    const int hargaLampu5Watt = 25088;
    const int hargaLampu10Watt = 38000;
    const int hargaLampu18Watt = 60000;
    
    int pilihan;
    int totalHarga = 0;
 	cout << "================"<< endl;
 	cout << "STRUK BELANJA" << endl;
 	

    strukBelanja += "Terimakasih sudah berbelanja di \"toko UKK\"\n";
    strukBelanja += "Masukkan jenis barang (1/2/3) atau 0 untuk selesai:\n";

    do {
        cout << strukBelanja;
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                strukBelanja += "Anda membeli lampu Philips 5 watt dengan harga Rp.25088,-\n";
                totalHarga += hargaLampu5Watt;
                break;
            case 2:
                strukBelanja += "Anda membeli lampu Philips 10 watt dengan harga Rp.38000,-\n";
                totalHarga += hargaLampu10Watt;
                break;
            case 3:
                strukBelanja += "Anda membeli lampu Philips 18 watt dengan harga Rp.60000,-\n";
                totalHarga += hargaLampu18Watt;
                break;
            case 0:
                strukBelanja += "Terima kasih telah berbelanja di toko UKK.\n";
                break;
            default:
                strukBelanja += "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    if (totalHarga > 0) {
        strukBelanja += "Total harga belanjaan Anda adalah: Rp." + to_string(totalHarga) + ",-\n";
    }

    cout << strukBelanja;

    return 0;
}
