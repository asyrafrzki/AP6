#include<iostream> 
using namespace std; 
//procedure
void penjumlahan(int* a, int* b){
    *a += *b; 
    cout<< *a<<endl;
}
//main program
int main(){
    system("cls");
    //variabel declaration
    int number = 16; 

    //alamat pointer dari variabel number
    int* ptrnumber = &number; 

    cout<<"Isi variabel: "<<number<<endl;
    cout<<"Alamat variabel number"<< &number<<endl;

    cout<<"Alamat variabel ptrnumber: "<<ptrnumber<<endl;
    cout<<"Isi variabel yang ditunjuk ptrnumber: "<< *ptrnumber<<endl;

    //operasi pointer
    *ptrnumber = 37; 
    cout<<"Alamat variabel ptrnumber: "<<ptrnumber<<endl;
    cout<<"Isi variabel yang ditunjuk ptrnumber: "<< *ptrnumber<<endl;
    cout<<"Alamat variabel ptrnumber: "<<&ptrnumber<<endl;

    //array pointer
    int num[] = {1, 2, 3, 4, 5};
     //Inisialisasi pointer dengan alamat memori dari variabel num
    int* ptrnum = num;
   
    cout<<"Isi variabel num indeks 0: "<<num[0]<<endl;
    cout<<"Alamat memori variabel num indeks 0 ="<< &num[0]<<endl; //alamatnya
    cout<<"Alamat variabel ptrnum = "<<ptrnum<<endl; //alamatnya
    cout<<"Isi variabel yang ditunjuk oleh ptrnum : "<<*ptrnum<<endl;

    //pointer parameter operasi
    int a = 2; 
    int b = 3; 

    penjumlahan(&a, &b); 
    cout<<a<<endl;

    //pointer ke pointer 
    int n = 4; 
    int* ptrn = &n;
    int** ptr_ptrn = &ptrn;

    cout<<"isi variabel n: "<<n<<endl; 
    cout<<"Alamat variabel n: "<< &n<<endl;
    cout<<"Alamat variabel ptrn: "<<ptrn<<endl; 
    cout<<"Isi variabel yang ditunjuk ptrn: "<< *ptrn<<endl;
    cout<<"Alamat variabel ptrn: "<< &ptrn<<endl; 
    cout<<"Alamat variabel ptr_ptrn: "<<ptr_ptrn <<endl; 
    cout<<"Alamat variabel yang ditunjuk oleh ptr_ptrn: "<<*ptr_ptrn<<endl; 
    cout<<"Isi variabel n diakses dari ptr_ptrn: "<<**ptr_ptrn<<endl;
    cout<<"Alamat memory ptr_ptrn: "<<&ptr_ptrn<<endl;

    //dinamic pointer 
    //deklarasi pointer
    int* ptr = new int; 
    //isi nilai ptr=24
    *ptr = 24; 
    cout<<"Isi variabel ptr:  "<<*ptr<<endl; 
    cout<<"Alamat ptr: "<<ptr<<endl; 
    //untuk menghapus memory ptr tadi
    delete ptr; 
    cout<<"Isi variabel ptr:  "<<*ptr<<endl; 
    cout<<"Alamat ptr: "<<ptr<<endl; 
    return 0;
}