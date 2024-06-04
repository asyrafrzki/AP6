#include <iostream>

using namespace std;

int main(){
    // a:
    // cout << "hello world"<< endl;
    // goto d;
    // b:
    // cout << "usu"<< endl;
    // return 0;
    // c:
    // cout << "fasilkom-ti"<< endl;
    // goto b;
    // d:
    // cout << "ilmu komputer"<< endl;
    // goto c;

    //deklarasi variabel
    int angka = 1;
    //looping menggunakan goto
    loop:
        cout << angka << " ";
        angka++;
        //jika angka lebih dari 10 maka akan berhenti
    if(angka <= 10){
        goto loop;
    }
}