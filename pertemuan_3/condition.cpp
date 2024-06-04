#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan Nilai:";
    cin >> nilai;

    //if statement
    // if(nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }

    // //if else statement
    // if(nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }
    // else{
    //     cout << "Lulus" << endl;
    // }

    //if-else-if statement
    // if(nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }
    // else if(nilai >  65){
    //     cout << "Lulus " << endl;
    // }
    // else if(nilai == 65){
    //     cout << "Lulus Pas Pasan" << endl;
    // }

    //nested if
    // if(nilai < 0 || nilai > 100){
    //     cout << "tidak valid"<<endl;
    // }
    // else{
    //     if(nilai < 65){
    //     cout << "tidak lulus" << endl;
    // }
    // else if(nilai >  65){
    //     cout << "Lulus " << endl;
    // }
    // else if(nilai == 65){
    //     cout << "Lulus Pas Pasan" << endl;
    // }

    // }

    //switch statement
    // switch (nilai){
    //     case 1:
    //     cout<<"senin"<<endl;
    //     break;
    //     case 2:
    //     cout<<"selasa"<<endl;
    //     break;
    //     case 3:
    //     cout<<"rabu"<<endl;
    //     break;
    //     case 4:
    //     cout<<"kamis"<<endl;
    //     break;
    //     case 5:
    //     cout<<"jumat"<<endl;
    //     break;
    //     case 6:
    //     cout<<"sabtu"<<endl;
    //     break;
    //     case 7:
    //     cout<<"minggu"<<endl;
    //     break;
    //     default:
    //     cout<<"tidak valid"<<endl;
    // }

    //switch case for range
    // switch (nilai){
    //     case 90 ... 100:
    //     cout << "A" << endl;
    //     break;
    //     case 85 ... 89:
    //     cout << "B+" << endl;
    //     break;
    //     case 80 ... 84:
    //     cout << "B" << endl;
    //     break;
    //     case 75 ... 79:
    //     cout << "C+" << endl;
    //     break;
    //     case 70 ... 74:
    //     cout << "C" << endl;
    //     break;
    //     case 65 ... 69:
    //     cout << "D" << endl;
    //     break;
    //     case 0 ... 64:
    //     cout << "E" << endl;
    //     break;
    //     default:
    //     cout<<"tidak valid"<<endl;
    // }

    //Ternary Operator hanya berlaku pada if else
    string tipe = (nilai > 0) ? "Positif" : "Negatif";
    cout << tipe << endl;
}