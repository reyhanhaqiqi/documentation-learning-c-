#include <iostream>
using namespace std;

int main () {

    bool found=false;
    char* nama[]={"Nana", "Rudy", "Dea", "Ihsan", "Tiara"};
    char* nomorinduk []={"13507701", "13507702", "13507703", "13507704", "13507705"};
    char* query="13507703";
    float nilai[]={65, 75, 75, 11, 84, 63, 77, 07, 66, 70};

    for (int i=0; i<5; i++) {
        if (nomorinduk[i]==query) {
            cout << nama[i] << "," << nomorinduk[i] << "," << nilai[i] << endl;
            found=true;
        }
    }
    if (!found) {
        cout << "Tidak DItemukan.";
    }
    return 0;
}