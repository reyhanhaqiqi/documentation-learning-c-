#include <iostream>
#include <conio.h>
using namespace std;

double a, b, pilih, hasil;
char ulang;

main () {
    
    ulangi:
    system ("color 2");

    cout << "Masukkan Bilangan Pertama\t: ";        cin >> a;
    cout << "Masukkan Bilangan Kedua\t\t: ";        cin >> b;
    cout << "Operasi Aritmatika  " << endl
         << "\t1. +" << endl
         << "\t2. -" << endl
         << "\t3. *" << endl
         << "\t4. /" << endl; 
    cout << "Pilih Operasi : ";                      cin >> pilih; 

    if (pilih == 1) {

        hasil = a + b;
        cout << "Hasil dari " << a << " + " << b << " adalah " << hasil << endl << endl;

    }else if (pilih == 2) {

        hasil = a - b;
        cout << "Hasil dari " << a << " - " << b << " adalah " << hasil << endl << endl;
        
    }else if (pilih == 3) {

        hasil = a * b;
        cout << "Hasil dari " << a << " x " << b << " adalah " << hasil << endl << endl;

    }else if (pilih == 4) {

        hasil = a / b;
        cout << "Hasil dari " << a << " : " << b << " adalah " << hasil << endl << endl;

    }else {

        system ("cls");
        cout << "Kode yang anda masukkan salah, silahkan ulangi program lagi";
        system ("color  4");
        getch ();
        return 0;

    }                       

    cout << "Apakah Anda Ingin Mengulangi Program ? (Y/N) : ";   cin >> ulang;

    if (ulang == 'Y' || ulang == 'y') {

        system ("cls");
        goto ulangi;
    
    }else {

        system ("color 3");
        system ("cls");
        cout << "TERIMA KASIH ANDA TELAH MENGGUNAKAN PROGRAM INI !!!";

    }

    getch ();

}