#include <iostream>
using namespace std;

//pointer deference (&) adalah operator alamat
void deference () {

    int a = 5;

    cout << "Alamat Variable a adalah : " << &a << endl;
    cout << "Nilai Variable a adalah  : " << a << endl << endl << endl;

}

//pointer reference (*) adalah operator mengakses nilai yang tersimpan disebuah variable
void reference () {

    int a = 5;
    int *b; //mendeklarasikan *b sebagai variable pointer
    b = &a; // mengkopikan alamat variable a kedalam variable pointer b

    cout << "Nilai variable a adalah : " << a << endl;
    cout << "Alamat variable a adalah : " << &a << endl;
    cout << "Isi dari variable b adalah : " << b << endl;
    cout << "Nilai yang tertampung dalam variable b adalah : " << *b << endl << endl << endl;

}

main () {
    system ("title Reyhan Haqiqi Alif Fourniawan");
    system ("color  2");

    deference ();
    //reference ();

}

/*
struct mahasiswa {

    char nama[25];
    char nim[15];
    char ipk;

};

int main () {

    mahasiswa *ms = new mahasiswa;
    
    cout << "masukkan nama mahasiswa : ";   cin >> ms -> nama;
    cout << "Masukkan nim mahasiswa  : ";   cin >> ms -> nim;
    cout << "Masukkan nilai IPK nya  : ";   cin >> ms -> ipk;

    cout << "Nama Mahasiswa : " << ms -> nama << endl;
    cout << "Nim Mahasiswa  : " << ms -> nim  << endl;
    cout << "IPK Mahasiswa  : " << ms -> ipk  << endl;
    
}*/

