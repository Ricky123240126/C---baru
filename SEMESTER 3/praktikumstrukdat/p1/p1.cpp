#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int umur, nim;
    float ipk;

};

int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2;

    mhs1.nama = "Ricky";
    mhs1.nim = 123240126;
    mhs1.umur = 19;
    mhs1.ipk = 3.7;

    mhs1.nama = "Nico";
    mhs1.nim = 123240100;
    mhs1.umur = 19;
    mhs1.ipk = 3.9;

    cout << mhs1.nama << endl;
    cout << mhs1.ipk << endl;
    cout << mhs2.nama << endl;
    cout << mhs2.ipk << endl;

    // int nilai[5] = {80,85,90,95,100};
    // cout << nilai[0] << " ini array indeks ke 0 \n";
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << nilai[i] << " ";
    // }
    
    // int daftarNilai[3][2] = {
    //     {75,80},
    //     {80,80},
    //     {90,85}
    // };
    // cout << daftarNilai[1][1] << endl;   

}