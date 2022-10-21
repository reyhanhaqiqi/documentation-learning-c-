#include <iostream>
#include <conio.h> 
using namespace std;

main() {

    int matrik[10][10];

    for (int i = 1; i <= 4; i++) {

        for (int j = 1; j <= 4; j++) {
            cout << "Masukkan angka pada baris ke " << i << " Kolom ke " << j << " : ";
            cin >> matrik[i][j];
            cin.get();
        }
        cout << endl;
    }
    cout << "Ini matrik ordo (4,4) 4 baris 4 kolom" << endl;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << matrik[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
