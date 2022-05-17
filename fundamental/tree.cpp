#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;


typedef struct node {
    int data;
    node *kiri;
    node *kanan;
};


void tambah (node **root, int databaru) {

    if ((*root) == NULL) {
        node *baru;
        baru = new node;
        baru -> data = databaru;
        baru -> kiri = NULL;
        baru -> kanan= NULL;
        (*root) = baru;
        (*root) -> kiri = NULL;
        (*root) -> kanan = NULL;
        cout << "Data Bertambah";
    }else if (databaru < (*root) -> data) {
        tambah (&(*root) -> kiri, databaru);
    }else if (databaru > (*root) -> data) {
        tambah (&(*root) -> kanan, databaru);
    }else if (databaru == (*root) -> data) {
        cout << "Data Sudah Ada";
    }

}


void preorder (node *root) {

    if (root != NULL) {
        cout << root -> data;
        preorder (root -> kiri);
        preorder (root -> kanan);
    }

}


void inorder (node *root) {

    if (root != NULL) {
        cout << root -> data;
        inorder (root -> kiri);
        inorder (root -> kanan);
    }

}


void postorder (node *root) {

    if (root != NULL) {
        cout << root -> data;
        postorder (root -> kiri);
        postorder (root -> kanan);
    }


}


int main () {

    int pil, c;
    int data;
    node *pohon, *t;
    pohon = NULL;

    do {
        cout << "MENU \n";
        cout << "1. Tambah\n";
        cout << "2. Lihat Pre-Order\n";
        cout << "3. Lihat In-Order\n";
        cout << "4. Lihat Post-Order\n";
        cout << "5. Exit\n";    
        cout << "Pilihan : ";  cin >> pil;

        switch (pil) {
            case 1 :
                cout << "Data Baru : ";     scanf ("%d", &data);
                tambah (&pohon, data);
                break;
            
            case 2 :
                if (pohon != NULL) {
                    preorder (pohon);
                } else {
                    cout << "Masih Kosong";
                }
                break;
            
            case 3 :
                if (pohon != NULL) {
                    inorder (pohon);
                } else {
                    cout << "Masih Kosong";
                }
                break;

            case 4 :
                if (pohon != NULL) {
                    postorder (pohon);
                } else {
                    cout << "Masih Kosong";
                }
                break;
        }
    getch ();
    cout << endl;
    } while (pil != 5);
}