#include <iostream>
using namespace std;

int main() {
    int jumlah, angkaDicari;

    cout << "Masukkan jumlah elemen array: ";
    cin >> jumlah;

    int array[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    int nilaiTertinggi = array[0];
    for (int i = 1; i < jumlah; i++) {
        if (array[i] > nilaiTertinggi) {
            nilaiTertinggi = array[i];
        }
    }
    cout << "Nilai tertinggi adalah: " << nilaiTertinggi << endl;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> angkaDicari;

    bool ditemukan = false;
    for (int i = 0; i < jumlah; i++) {
        if (array[i] == angkaDicari) {
            cout << "Angka " << angkaDicari << " ditemukan di indeks ke-" << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << angkaDicari << " tidak ditemukan." << endl;
    }

    return 0;
}
