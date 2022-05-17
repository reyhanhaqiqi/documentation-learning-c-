#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//fungsi perhitungan rata-rata
float f_rata(float batas, float total) {
    float hasil;
    return hasil;

    }

int main () {

    int *data; //pointer untuk membuat array dinamis
    int max;
    data = new int[max];

    cout << "Masukkan batas maximal : ";    cin >> max;
    cout << endl;

    for (int i=0; i<max; i++) {
        cout << "Masukkan bilangan ke " << i << " : ";      cin >> data[i];
    }

    cout << endl;
    cout << "Bilangan yang anda inputkan : ";

    for (int i=0; i<max; i++) {
        cout << data[i] << " ";
    }

    //Jumlah bilangan genap & ganjil
    int tampung_genap = 0;
    int tampung_ganjil = 0;

    for (int i=0; i<max; i++) {
        if ((data[i]%2)==0) {
            tampung_genap += data[i];
        }else {
            tampung_ganjil += data[i];
        }
    }

    int tampung_total = tampung_genap + tampung_ganjil; //hitung total jumlah bilagan

    cout << endl;
    cout << "Total bilangan genap adalah   : " << tampung_genap  << endl;
    cout << "Total bilangan ganjil adalah  : " << tampung_ganjil << endl;
    cout << "Total seluruh bilangan adalah : " << setprecision(3) << tampung_total << endl;

    getch ();

}