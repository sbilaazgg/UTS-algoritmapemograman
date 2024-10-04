#include <iostream>
using namespace std;

int main() {
    string nama, npm;
    double nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu, ulang;

    cout << "======= Selamat Datang di Program Menghitung Nilai Akhir Mahasiswa =======\n" << endl;

    do {
        do {
            cout << "Masukkan Nama Mahasiswa      : ";
            getline(cin, nama);

            if (nama == ""){
                cout << "Input kosong. Mohon input nama kembali." << endl;
            }
        } while (nama == "");
        do {
            cout << "Masukkan NPM Mahasiswa       : ";
            cin >> npm;

            if (npm == ""){
                cout << "Input kosong. Mohon input NPM kembali." << endl;
            }
        } while (nama == "");
        cout << "Masukkan Nilai Absen (0-100) : ";
        cin >> nilaiAbsen;
        cout << "Masukkan Nilai Tugas (0-100) : ";
        cin >> nilaiTugas;
        cout << "Masukkan Nilai UTS (0-100)   : ";
        cin >> nilaiUTS;
        cout << "Masukkan Nilai UAS (0-100)   : ";
        cin >> nilaiUAS;

        nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

        if (nilaiAkhir >= 85 && nilaiAkhir <= 100) {
            hurufMutu = 'A';
        } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
            hurufMutu = 'B';
        } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
            hurufMutu = 'C';
        } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
            hurufMutu = 'D';
        } else {
            hurufMutu =  'E';
        }

        cout << "\n========== Nilai Akhir Mahasiswa ==========" << endl;
        cout << "Nama Mahasiswa   : " << nama << endl;
        cout << "NPM Mahasiswa    : " << npm << endl;
        cout << "Nilai Absen      : " << nilaiAbsen << endl;
        cout << "Nilai Tugas      : " << nilaiTugas << endl;
        cout << "Nilai UTS        : " << nilaiUTS << endl;
        cout << "Nilai UAS        : " << nilaiUAS << endl;
        cout << "============================"<< endl;
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
        cout << "Huruf Mutu: " << hurufMutu << endl;

        cout << "\nApakah ingin mengulang kembali? (y/n) : ";
        cin >> ulang;
        cin.ignore();
        cout << endl;

        while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N'){
            cout << "Input tidak valid" << endl;
            cout << "Mohon input kembali (y/n) : ";
            cin.ignore();
            cin >> ulang;
            cout << endl;
        }
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Anda keluar dari program" << endl;
    cout << "Terima kasih :)" << endl;


    return 0;
}
