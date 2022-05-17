#include <iostream>
#include <cstdio>
using namespace std;

string x;
int jumlah[10];
int data = sizeof (jumlah) / sizeof (*jumlah);


void coba () {
    cout << "Hello World"
         << endl;
}

void coba2 () {
    cout << "Namaku adalah : ";    cin >> x;
}

main () {
    coba();
    coba2();
}