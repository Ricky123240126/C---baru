#include <iostream>
#include <string>
using namespace std;

// Node untuk linked list
struct Pasien {
    string nama;
    int umur;
    Pasien *next;
};

// Pointer awal dan akhir
Pasien *head = NULL;
Pasien *tail = NULL;

// Fungsi untuk menambah pasien ke antrean
void tambahPasien(string nama, int umur) {
    Pasien *baru = new Pasien;
    baru->nama = nama;
    baru->umur = umur;
    baru->next = NULL;

    if (head == NULL) { // antrean kosong
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }

    cout << "✅ Pasien " << nama << " berhasil ditambahkan ke antrean.\n";
}

// Fungsi untuk menampilkan antrean pasien
void tampilAntrean() {
    if (head == NULL) {
        cout << "Antrean kosong!\n";
        return;
    }

    cout << "\n=== Daftar Antrean Pasien ===\n";
    Pasien *bantu = head;
    int nomor = 1;
    while (bantu != NULL) {
        cout << nomor << ". " << bantu->nama << " (Umur: " << bantu->umur << ")\n";
        bantu = bantu->next;
        nomor++;
    }
    cout << "============================\n";
}

// Fungsi untuk menghapus pasien dari depan antrean
void layaniPasien() {
    if (head == NULL) {
        cout << "Tidak ada pasien dalam antrean!\n";
        return;
    }

    Pasien *hapus = head;
    head = head->next;

    cout << "✅ Pasien " << hapus->nama << " telah dilayani.\n";
    delete hapus;

    if (head == NULL) {
        tail = NULL; // antrean kosong setelah dihapus
    }
}

int main() {
    int pilihan;
    string nama;
    int umur;

    do {
        cout << "\n=== SISTEM ANTREAN KLINIK ===\n";
        cout << "1. Tambah Pasien\n";
        cout << "2. Tampilkan Antrean\n";
        cout << "3. Layani Pasien\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Pasien: ";
                cin >> nama;
                cout << "Masukkan Umur Pasien: ";
                cin >> umur;
                tambahPasien(nama, umur);
                break;
            case 2:
                tampilAntrean();
                break;
            case 3:
                layaniPasien();
                break;
            case 4:
                cout << "Terima kasih. Program selesai.\n";
                break;
            default:
                cout << "⚠ Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}
