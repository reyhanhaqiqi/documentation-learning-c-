#include <iostream>
#include <conio.h>
using namespace std;

main () {
    system ("title Reyhan Haqiqi");
    
    char ulang;
    int p, l, L;
    
    ulang:
    system ("color 2");
    cout << "Masukkan Panjang Persegi Panjang\t: ";      cin >> p;
    cout << "Masukkan Lebar Persegi Panjang\t\t: ";        cin >> l;

    L = p * l;

    cout << "Luas Persegi Panjang Adalah : " << L << " cm "
         << endl
         << endl;
    
    cout << "Apakah Anda Ingin Mengulangi program ? (Y/N) : ";  cin >> ulang;

    if (ulang == 'Y' || ulang == 'y') {
        system ("cls");
        goto ulang;
    }else {
        system ("cls");
        system ("color 4");
        cout << "TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM INI !!!";

    }
    getch ();
}