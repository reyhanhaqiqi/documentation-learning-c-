#include <iostream>
#include <cstring>
using namespace std;

main() {

    char kata[10];

    cout << "Masukkan kata : ";
    cin >> kata;

    int x = strlen(kata);

    for (int i = x - 1; i >= 0; i--) {
        cout << kata[i];
    }
}