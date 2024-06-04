// valume = phi * r * r * t

#include <iostream>
 using namespace std;
// main program
 int main(){
    // Deklarasi variabel
    float  r , volume , tinggi;
//konstanta phi = 3.14
const float phi = 3.14;
    //masukkan jari jari
    cout << "masukkan jari jari :";
    cin >> r;
    //masukkan tinggi
    cout << "masukkan tinggi :";
    cin >> tinggi;
    //rumus volume tabung
    volume = phi * r * r * tinggi;
    //tampilkan hasil volume
  cout << "volume = " << volume << endl;
 }