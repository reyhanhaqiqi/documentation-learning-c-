#include <iostream>
using namespace std;

main() {
    system("title Reyhan Haqiqi Alif Fourniawan _ 201080200044");

    int n;

    cout << "---------- Lagu Anak Ayam ----------" << endl << endl << endl;

    cout << "Masukkan jumlah anak ayam : ";
    cin >> n;
    cin.get();
    cout << endl;
    cout << "Anak ayam turun " << n << endl;

    for (int i = 1; n > i; n--) {
        cout << "Anak ayam turun " << n << ", mati satu tinggal " << n - 1 << endl;
    }

    cout << "Anak ayam turun 1, mati satu tinggal indukya";

    return 0;
}
