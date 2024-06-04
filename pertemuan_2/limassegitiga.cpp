#include <iostream>
using namespace std;

// main program
int main() {
    // Deklarasi variabel
    float luas_alas, luas_permukaan, luas_tegak, volume, tinggi;
    //masukkan luas alas
    cout << "Masukkan luas alas: ";
    cin >> luas_alas;
    //maasukkan tinggi
    cout << "Masukkan tinggi limas: ";
    cin >> tinggi;
    //masukkan luas sisi tegak
    cout << "Masukkan luas sisi tegak limas: ";
    cin >> luas_tegak;
    //rumus volume limas segitiga
    volume = (1.0 / 3) * luas_alas * tinggi; // 1.0 untuk pembagian floating point(desimal)
    //rumus luas permukaan limas segitiga
    luas_permukaan = luas_alas + luas_tegak;
    //tampilkan hasil
    cout << "Volume = " << volume << endl;
    cout << "Luas permukaan = " << luas_permukaan << endl;

    return 0;
}
