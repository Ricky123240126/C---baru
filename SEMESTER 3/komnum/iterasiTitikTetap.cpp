#include <iostream>
#include <cmath>
using namespace std;

double g(double x) {
    return sqrt(4 * x + 21); // g(x) = sqrt(4x+21)
}

int main() {
    double x0 = 4.0;
    double x1;
    double eps = 0.00001;
    int maxIter = 25;

    cout << "Metode Titik Tetap\n";
    cout << "Iterasi | x0\t\t| x1\t\t| Error\n";
    cout << "----------------------------------------\n"

    cout.setf(ios::fixed);
    cout.precision(8); //untuk membaca 8 digit dibelakang koma tanpa membulatkannya

    for (int i = 1; i <= maxIter; i++) {
        x1 = g(x0);
        double error = fabs(x1 - x0);

        cout << i << "\t| " << x0 << "\t| " << x1 << "\t| " << error << "\n";

        if (error < eps) {
            cout << "\nAkar ditemukan: x = " << x1 << " pada iterasi ke-" << i << endl;
            return 0;
        }

        x0 = x1;
    }

    cout << "\nIterasi maksimum tercapai, x = " << x1 << endl;
    return 0;
}
