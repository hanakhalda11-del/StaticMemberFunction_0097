#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (Nilai Default)
    Kendaraan() {
        id = 0;
        nama = "Tidak Ada Nama";
    }

    // 2. Constructor dengan parameter ID saja
    Kendaraan(int pId) {
        id = pId;
        nama = "Tanpa Nama";
    }

    // 3. Constructor dengan parameter Nama saja
    Kendaraan(string pNama) {
        id = 0;
        nama = pNama;
    }

    // 4. Constructor dengan parameter Lengkap (ID dan Nama)
    Kendaraan(int pId, string pNama) {
        id = pId;
        nama = pNama;
    }

    // Metode untuk menampilkan data kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Inisialisasi menggunakan empat metode berbeda
    Kendaraan mobil1;                          // Menggunakan constructor default
    Kendaraan mobil2(101);                     // Menggunakan constructor ID saja
    Kendaraan mobil3("Motor Honda");           // Menggunakan constructor Nama saja
    Kendaraan mobil4(202, "Mobil Toyota");     // Menggunakan constructor lengkap

    // Menampilkan informasi semua kendaraan
    cout << "=== Informasi Data Kendaraan ===" << endl << endl;
    
    cout << "Kendaraan 1 (Default):" << endl;
    mobil1.tampilkanInfo();

    cout << "Kendaraan 2 (Hanya ID):" << endl;
    mobil2.tampilkanInfo();

    cout << "Kendaraan 3 (Hanya Nama):" << endl;
    mobil3.tampilkanInfo();

    cout << "Kendaraan 4 (Lengkap):" << endl;
    mobil4.tampilkanInfo();

    return 0;
}