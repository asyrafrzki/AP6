#include <iostream>
using namespace std;

int main(){
    // int angka = 1;
    // while(angka <=10){
    //     cout << angka << " ";
    //     angka++
    // }
    // deklarasi variabel
    int angka = 1;
    //perulangan while angka kurang dari sama dengan 20
    while (angka <= 20){
        //jika angka habis dibagi 2 maka genap
        if(angka % 2 == 0){
            cout << angka << " ";
        }
        angka++;
    }

}