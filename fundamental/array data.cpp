#include <iostream>
using namespace std;

main () {

    int  x;
    int data[20];

    cout << "Masukkan banyak data : ";      cin >> x;
    cout << endl;
        

    for (int i = 0; i < x; i++) {
        cout << "Masukkan data ke " << i + 1 << " : ";       cin >> data[20];
    }
}