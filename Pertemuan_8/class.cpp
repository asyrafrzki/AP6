#include<iostream>
#include<vector>
using namespace std; 

//class bisa menambahkan function
//declare class
class Mahasiswa{
    
    //access specifier
    private: 
        string Nama, Nim; 
        float Nilai;

    //access specifier
    public: 
        //constructor
        Mahasiswa(string nama, string nim, float nilai){
            //inisialisasi
            this->Nama = nama; 
            this->Nim = nim; 
            this->Nilai = nilai;
        } 

        //getter
        string getNama(){
            return this->Nama;
        }

        string getNim(){
            return this->Nim;
        }

        float getNilai(){
            return this->Nilai;
        }
        //function
        void display(){
            cout<<"Nama : "<<this->getNama()<<endl; 
            cout<<"NIM : "<<this->Nim<<endl; 
            cout<<"Nilai : "<<this->Nilai<<endl; 
        }
};

//main program
int main(){
    // Mahasiswa mhs("Andi", "231401001", 87.2); //Instansiasi
    // mhs.display();

    // cout<<mhs.getNama()<<endl;
    // cout<<mhs.getNim()<<endl;
    // cout<<mhs.getNilai()<<endl;

    //declare vector
    vector<Mahasiswa> mahasiswa; 
    int n; 
    string nama, nim; 
    float nilai;
    cout<<"Masukkan jumlah mahasiswa: "; 
    cin>>n; 
    //looping
    for(int i=0; i<n; i++){
        cout<<"Mahasiswa ke-"<<i+1<<endl; 
    //membaca karakter
        cin.get(); 
      //input data
        cout<<"Masukkan nama : "; 
        getline(cin, nama); 
        
        cout<<"Masukkan nim : "; 
        cin>>nim; 
        
        cout<<"Masukkan nilai : "; 
        cin>>nilai; 
        
        Mahasiswa mhs(nama, nim, nilai); 
        mahasiswa.push_back(mhs);
    }
    //looping
    for(int i=0; i<n; i++){
        cout<<"Mahasiswa ke-"<<i+1<<endl;
        mahasiswa[i].display();
    }
    return 0;
}