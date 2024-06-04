#include<iostream>
#include<array>
using namespace std; 
int main(){
    system("cls"); 
    // //deklarasi array 
    // string nama[5] = {"Andi", "Budi", "Santi", "Anto", "Denis"}; 

    // //memanggil array
    // //cout<<nama[0]<<endl; 

    //perulangan array
    // for(int i=0; i<5; i++){
    //     cout<<nama[i]<<endl; 
    // }

    // //multidimentional array 
    // int matriks[2][2] = {{1, 3}, {2, 4}}; 

    // cout<<matriks[0][0]<<endl;

    //perulangan multidimentional array
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //         cout<<matriks[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // array dari index sebuah string
    // //string (Array of characters)
    // string nama= "Jonrio"; 
    //tampilkan huruf sesuai index
    // cout<<nama[0]<<endl;

    //perulangan
    // for(int i=0; i<3; i++){
    //     cout<<nama[i]<<" ";
    // }

    // for(int i=0; i<nama.length(); i++){
    //     cout<<nama[i]<<endl;
    // }

   
    int n; 
    cout<<"Masukkan banyak mahasiswa: "; 
        cin>>n; 
    //deklarasi array
   float nilai[n]; 
    //perulangan increment
    for(int i=0; i<n; i++){
        //input nilai mahasiswa
        cout<<"Masukkan nilai mahasiswa ke-"<<i+1<<": ";
            cin>>nilai[i];
    }
    //perulangan nilai mahasiswa
    for(int i=0; i<n; i++){
        //tampilkan nilai mahasiswa didalam array
        cout<<"Nilai mahasiswa ke-"<<i+1<<" adalah: "<<nilai[i]<<endl;
    }

    //deklarasi array
    string nama_karyawan[] = {"andi", "yusuf", "budi", "yanto", "santi", "dodi"};

    //untuk mengecek panjang array
    //n*sizeof(string) = sizeof(nama_karyawan)
    //n = sizeof(nama_karyawan/sizeof(string))
    cout<<sizeof(nama_karyawan)<<endl;
    for(int i=0; i<sizeof(nama_karyawan)/sizeof(string); i++){
        cout<<nama_karyawan[i]<<endl;
    }

    //matriks
    int matriks1[2][2]; 
    int matriks2[2][2]; 
    int hasil[2][2]; 

    cout<<"Matriks 1"<<endl; 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            //input matriks
            cout<<"Masukkan elemen baris-"<<i+1<<"kolom-"<<j+1<<": ";
            cin>>matriks1[i][j];
        }
    }

    cout<<"Matriks 2"<<endl; 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            //input matriks
            cout<<"Masukkan elemen baris-"<<i+1<<" kolom-"<<j+1<<": ";
            cin>>matriks2[i][j];
        }
    }

    cout<<"Hasil penjumlahan"<<endl; 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            //penjumlahan matriks satu dan 2
            hasil[i][j]= matriks1[i][j]+matriks2[i][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}