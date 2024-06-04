#include<iostream>
#include<vector>
using namespace std; 

//declare struct
struct Mahasiswa{
   string nama, nim; 
   float nilai;
};

//main program
int main(){
    //declare vector
    vector<Mahasiswa> mahasiswa; 
    Mahasiswa mhs;
    int n; 

    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> n; 
    //looping
    for(int i = 0; i < n; i++) {
        cin.get();
        
        cout<<"Mahasiswa ke-"<<i+1<<endl;
        cout << "Masukkan nama: "; 
        getline(cin, mhs.nama); 

        cout << "Masukkan nim: "; 
        cin >> mhs.nim;  

        cout << "Masukkan nilai: "; 
        cin >> mhs.nilai;  
    //store data
        mahasiswa.push_back(mhs);  
    }

    for(int i = 0; i<n; i++){
        cout<<mahasiswa[i].nama<<" NIM "<<mahasiswa[i].nim<<" nilai "<<mahasiswa[i].nilai<<endl;
    }

    return 0;
}