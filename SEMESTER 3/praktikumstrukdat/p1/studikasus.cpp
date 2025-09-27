#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mhs[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "mahasiswa ke-" << i+1 << endl;
        cout << "nama : "; cin >> mhs[i].nama;
        cout << "umur : "; cin >> mhs[i].umur;
        cout << "IPK : "; cin >> mhs[i].ipk;
    }
    cout << endl;
    // menampilkan
    for (int i = 0; i <= 4; i++)
    {
        cout << "mahasiswa ke-" << i << endl;
        cout << "nama : " << mhs[i].nama << endl;
        cout << "umur : " << mhs[i].umur << endl;
        cout << "IPK : " << mhs[i].ipk << endl;
    }
    return 0;
}