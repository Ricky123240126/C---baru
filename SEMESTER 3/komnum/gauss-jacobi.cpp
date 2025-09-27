#include <iostream>
#include <cmath>
using namespace std;

void gauss_jacobi()
{
    // Inisialisasi awal
    double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    double x1_new, x2_new, x3_new, x4_new;
    double eps = 0.0001;
    int iter = 0, maxIter = 1000;
    double err1, err2, err3, err4;

    cout << "Metode Gauss-Jacobi\n";

    do {
        // Iterasi Gauss-Jacobi (pakai nilai lama)
        x1_new = (6 + x2 - 2 * x3) / 10.0;
        x2_new = (25 + x1 + x3 - 3 * x4) / 11.0;
        x3_new = (-11 - 2 * x1 + x2 + x4) / 10.0;
        x4_new = (15 - 3 * x2 + x3) / 8.0;

        // Hitung error
        err1 = fabs(x1_new - x1);
        err2 = fabs(x2_new - x2);
        err3 = fabs(x3_new - x3);
        err4 = fabs(x4_new - x4);

        // Update nilai
        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
        x4 = x4_new;

        iter++;

        cout << "Iterasi " << iter << ": "
             << "x1=" << x1 << ", "
             << "x2=" << x2 << ", "
             << "x3=" << x3 << ", "
             << "x4=" << x4 << endl;

    } while ((err1 > eps || err2 > eps || err3 > eps || err4 > eps) && iter < maxIter);

    cout << "\nSolusi Aproksimasi:\n";
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
}

void gauss_seidel()
{
    // Inisialisasi awal
    double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    double x1_new, x2_new, x3_new, x4_new;
    double eps = 0.0001;
    int iter = 0, maxIter = 1000;
    double err1, err2, err3, err4;

    cout << "Metode Gauss-Seidel\n";

    do {
        // Iterasi Gauss-Seidel (pakai nilai baru langsung)
        x1_new = (6 + x2 - 2 * x3) / 10.0;
        x2_new = (25 + x1_new + x3 - 3 * x4) / 11.0;
        x3_new = (-11 - 2 * x1_new + x2_new + x4) / 10.0;
        x4_new = (15 - 3 * x2_new + x3_new) / 8.0;

        // Hitung error
        err1 = fabs(x1_new - x1);
        err2 = fabs(x2_new - x2);
        err3 = fabs(x3_new - x3);
        err4 = fabs(x4_new - x4);

        // Update nilai
        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
        x4 = x4_new;

        iter++;

        cout << "Iterasi " << iter << ": "
             << "x1=" << x1 << ", "
             << "x2=" << x2 << ", "
             << "x3=" << x3 << ", "
             << "x4=" << x4 << endl;

    } while ((err1 > eps || err2 > eps || err3 > eps || err4 > eps) && iter < maxIter);

    cout << "\nSolusi Aproksimasi:\n";
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
}

int main() 
{
    int pilihan;
    bool kembali = true;
    string back;

    do {
        cout << "Silahkan Pilih ingin Menggunakan metode \n";
        cout << "1. Gauss-Jacobi method\n";
        cout << "2. Gauss-Seidel method\n";
        cout << "Masukkan pilihan : ";
        cin >> pilihan;

        system("cls");

        switch (pilihan)
        {
            case 1:
                gauss_jacobi();
                break;
            case 2:
                gauss_seidel();
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                return 0;
        }

        cout << "Apakah anda ingin kembali? (y/n): ";
        cin >> back;
        if (back == "y" || back == "Y")
            kembali = true;
        else if (back == "n" || back == "N")
            kembali = false;
        else {
            cout << "Pilihan tidak valid!\n";
            return 0;
        }

    } while (kembali);

    return 0;
}
