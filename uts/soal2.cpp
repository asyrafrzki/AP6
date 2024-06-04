#include <iostream>
using namespace std;

int main() {
    int bilangan;
    int jumlah = 0;
    cout << "Masukkan bilangan :";
    cin >> bilangan;
  
    while( bilangan != 0){
        jumlah += bilangan % 10;
        bilangan=bilangan/10;  
    }
cout << "jumlah deret nya adalah =" << jumlah <<endl;
}