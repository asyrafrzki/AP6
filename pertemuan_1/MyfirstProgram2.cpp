#include<iostream>
#include <iomanip>

using namespace std;

int main(){
string nama;
int nim;
char kom;
float ip;

system("cls");
cout << "Masukkan nama :";
getline(cin, nama);

cout << "Masukkan nim :";
cin >> nim;

cout << "Masukkan kom :";
cin >> kom;

cout << "Masukkan ip :";
cin >> ip;

cout << "Nama :" << nama << endl;
cout << "Nama :" << nim << endl;
cout << "Nama :" << kom << endl;
cout << "Nama :" <<  fixed<< setprecision(2) << ip << endl;

return 0;

}