#include <iostream>
using namespace std;

// int tambah(){
//     return 2 + 3;
// }
//fungsi tambah
int tambah(int a, int b){
    return a + b;
}
//fungsi kurang
int kurang(int a, int b){
    return a - b;
}
//fungsi kali
int kali(int a, int b){
    return a * b;
}
//fungsi bagi
float bagi(float a, float b){
    return a / b;
    //cara lain pembagian float
    // return static_cast<float>(a) /   return static_cast<float>(b)
}

//procedure
void sayHello(string name){
    cout << "Hello world" <<endl;

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
//tampilkan output
cout << tambah(2, 3) << endl;
cout << kurang(2, 3) << endl;
cout << kali(2, 3) << endl;
cout << bagi(2, 3) << endl;

return 0;
}