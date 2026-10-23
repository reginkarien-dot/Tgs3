
#include <iostream>
using namespace std;

int main() {
    string makanan;
    int harga, jumlah, total;

    cout << "=== APLIKASI KASIR ===" << endl;
    cout << "1. Soto  - Rp15000" << endl;
    cout << "2. Rawon - Rp20000" << endl;

    cout << "Pilih makanan (1/2): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        makanan = "Soto";
        harga = 15000;
    } else if (pilihan == 2) {
        makanan = "Rawon";
        harga = 20000;
    } else {
        cout << "Pilihan tidak tersedia!" << endl;
        return 0;
    }

    cout << "Jumlah porsi: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah porsi tidak valid!" << endl;
        return 0;
    }

    total = harga * jumlah;

    cout << "\n=== STRUK PEMBELIAN ===" << endl;
    cout << "Makanan: " << makanan << endl;
    cout << "Harga: Rp" << harga << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Total: Rp" << total << endl;
    cout << "Terima kasih!" << endl;

    return 0;
}
