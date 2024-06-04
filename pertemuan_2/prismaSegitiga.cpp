// Volume = (½ x alas x tinggi) x tinggi prisma.
 //Luas permukaan = (2 x luas alas) + luas selimut
 #include <iostream>
using namespace std;
// main program
int main() {
    // Deklarasi variabel
    float alas , tinggi, tinggiPrisma , luas_alas , luas_selimut, volume , luas_permukaan;
    //masukkan alas
    cout << "Masukkan alas: ";
    cin >> alas;
    //masukkan tinggi
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    //masukkan tinggi prisma
    cout << "Masukkan tinggi prisma: ";
    cin >> tinggiPrisma;
    //masukkan luas alas
    cout << "Masukkan luas alas: ";
    cin >> luas_alas;
    //masukkan luas selimut
     cout << "Masukkan luas selimut: ";
    cin >> luas_selimut;
    //rumus volume prisma segitiga
    volume = (1.0 / 2) * alas * tinggi * tinggiPrisma; 
    //rumus luas permukaan prisma segitiga
    luas_permukaan = (2 *luas_alas) + luas_selimut;
    //tampilkan hasil volume dan luas permukaan
    cout << "Volume = " << volume << endl;
    cout << "Luas permukaan = " << luas_permukaan << endl;

    return 0;
}