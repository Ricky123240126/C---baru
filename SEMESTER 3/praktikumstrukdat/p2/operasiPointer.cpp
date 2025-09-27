#include <iostream>

using namespace std;

int main()
{
    // int a = 100, b = 200, *pa, *pb;

    // pa = &a;
    // pb = &b;

    // if (pa < pb)
    // {
    //     cout << "pa menunjuk ke memori yang lebih rendah dari pb\n";
    // }
    //     if (pa == pb)
    // {
    //     cout << "pa menunjuk ke memori yang sama dengan pb\n";
    // }
    // if (pa > pb)
    // {
    //     cout << "pa menunjuk ke memori yang lebih tinggi dari pb\n";
    // }
    //VARIABEL YANG DIDEKLARASI LEBIH AWAL MAKA MEMILIKI MEMORI YANG LEBIH TINGGI

    // int nilai[3], *penunjuk;
    // nilai[0] = 125;
    // nilai[1] = 345;
    // nilai[2] = 750;

    // penunjuk = &nilai[0];
    // cout << "nilai " << *penunjuk << " ada di alamat memori " << penunjuk << endl;
    // cout << "nilai " << *(penunjuk + 1) << " ada di alamat memori " << penunjuk+1 << endl;
    // cout << "nilai " << *(penunjuk + 2) << " ada di alamat memori " << penunjuk+2 << endl;
    //OPERASI PADA INT

    
    char tokoh[] = "Roronoa Zoro";
    char *ptokoh = "Roronoa Zoro";

    cout << "tokoh = " << tokoh << endl;
    cout << "pointer tokoh = " << ptokoh << endl;

    ptokoh+=8;

    cout << endl;
    cout << "tokoh = " << tokoh << endl;
    cout << "pointer tokoh = " << ptokoh << endl;
    // ARRAY CHAR

    // int x[5], *p, k;
    // p = x;

    // x[0] = 5;
    // x[1] = x[0];
    // x[2] = *p + 2;
    // x[3] = *(p + 1) - 3;
    // x[4] = *(x + 2);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "nilai array indeks ke-" << i << " = " << x[i] << endl;
    // }
    //OPERASI POINTER ARRAY
}