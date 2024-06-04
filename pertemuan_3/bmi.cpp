#include<iostream>
using namespace std;

int main(){
    //deklarasi variabel
    float weight;
    string a;
    //masukkan berat
    cout<<"Masukkan berat badan (Kg) : ";
        cin>>weight;
    
    //rumus BMI
    if(weight < 18.5){
        a = "Berat badan kurang";
    }else if(weight >= 18.5 || weight < 25){
        a = "Berat badan normal";
    }
    //tampilkan hasil
    cout<<"BMI anda : "<<weight<<endl;
    cout<<"Kategori : "<<a;

    cout<<endl;
    
    system("pause");
    return 0;
}