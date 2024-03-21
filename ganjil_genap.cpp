//Buat program menentukan program ganjil atau genap
#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan bilangan:";
    cin >> nilai;

    if (nilai % 2 == 0){
        cout << "genap"<<endl;
    }
       else{
        cout<<"ganjil"<<endl;
       }
}