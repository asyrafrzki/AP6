//Buat program menentukan program ganjil atau genap
#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    int nilai;
    //input data    
    cout << "Masukkan bilangan:";
    cin >> nilai;
    //jika nilai habis dibagi 2 maka genap
    if (nilai % 2 == 0){
        cout << "genap"<<endl;
    }
    //jika nilai tidak habis dibagi 2 maka ganjil
       else{
        cout<<"ganjil"<<endl;
       }
}