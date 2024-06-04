#include<iostream>
#include <iomanip>

using namespace std;

//main program
int main(){
//deklarasi variabel
string nama;
int nim;
char kom;
float ip;


system("cls");
//input data
cout << "Masukkan nama :";
getline(cin, nama);

cout << "Masukkan nim :";
cin >> nim;

cout << "Masukkan kom :";
cin >> kom;

cout << "Masukkan ip :";
cin >> ip;

//tampilkan isi data yang di input
cout << "Nama :" << nama << endl;
cout << "Nama :" << nim << endl;
cout << "Nama :" << kom << endl;
//untuk membatasi angka dibelakang koma yaitu 2 angka 
cout << "Nama :" <<  fixed<< setprecision(2) << ip << endl;

return 0;

}