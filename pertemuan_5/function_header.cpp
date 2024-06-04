#include <iostream>
#include "operasi.h"
#include "prepocessor.h"
//konstanta uns = using namespace std
uns;
//prosedur
void sayHello(string name){
    cout << "Hello world " << name <<endl;

}

void garis(){
    cout << "========" << endl;
}

void bintang(){
    cout << "******" << endl;
}
// main program
int main(){
    system("cls");
    sayHello("Asyraf");
    garis();
    bintang();
cout << tambah(2, 3) << endl;
cout << kurang(2, 3) << endl;
cout << kali(2, 3) << endl;
cout << bagi(2, 3) << endl;
cout << PI << endl;
return 0;
}