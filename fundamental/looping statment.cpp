#include <iostream>
using namespace std;

int main () {

    for (int j=0; j<10; j++) {
        cout << "menggunakan looping for" << endl;
    }

    cout << endl << endl;

    int k=0;
    while (k<10) {
        cout << "menggunkan looping while" << endl;
        k+=1;
    }

    cout << endl << endl;

    int l=0;
    do {
        cout << "menggunakan looping do while" << endl;
        l+=1;
    }while (l<10);
}