#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    int angka = 1;
    //perulangan do while
    do{
        cout<< angka << " ";
        angka;
    }
    //perulangan akan berhenti ketika angka lebih dari 10
    while(angka <= 10);
    //memberi nilai awal angka
    angka = 1;
    //perulangan do while
    do{
        //menampilkan angka
        cout<< angka << " ";
        //perulangan nambah angka
        angka++;
    }
    //perulangan akan berhenti ketika angka lebih dari 10
    while(angka > 10);
}