#include <iostream> 
using namespace std;

//tanda & menunjuk alamat
//tanda * menunjuk nilai

int fungsi(int *ptr, int sebelum)
{
    ptr = &sebelum;
    *ptr = 85;
    return *ptr;
}

int main()
{
    int sebelum = 70;
    int *ptr;
    cout << "nilai sebelum = " << sebelum << endl;
    cout << "nilai sesudah dimanipulasi pointer = " << fungsi(ptr, sebelum);

}