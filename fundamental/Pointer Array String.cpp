#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main () {

    char *hewan = "ikan"; //pointer hewan memuat alamat string
    char nama_ikan[20];

    cout << "Masukkan nama ikan : ";    cin >> nama_ikan;

    //strcat digunakan untuk
    strcat(hewan, nama_ikan);

    cout << "Nama Ikan : " << hewan;

    getch ();

}