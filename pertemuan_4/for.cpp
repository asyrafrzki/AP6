#include <iostream>
using namespace std;

int main(){
    // for(int i =1; i<=10; i++){
    //     cout<< " Hello world" << endl;

    // }

    // for(int i = 1; i <= 20; i++){
    //     if(i % 2 == 0){
    //         cout << i << " ";
    //     }
    // }

//     for(int baris = 1; baris <= 4; baris++){
//         for(int kolom = 1; kolom<=4; kolom++){
//             cout << "* ";
//         }
//         cout << endl;
// }
// for(int i = 1; i <= 4; i++){
//         for(int j = 1; j<=i; j++){
//             cout << "* ";
//         }     
//         cout << endl;
// }

//delarasi variabel
 int n, num = 0, sum = 0;
    //input data
    cout << "Masukkan suku ke = ";
    cin >> n;
    //perulangan
    for (int i = 1; i <= n; i++) {
        //jika i habis dibagi 2 maka num tetap
        if (i % 2 == 0) {
            num = num;
        } 
        //jika i tidak habis dibagi 2 maka num ditambah 5
        else {
            num += 5;
        }
        //jumlah suku
        sum += num;
        //tampilkan hasil suku ke dan jumlah suku ke
        cout << "Suku ke " << n << " adalah " << num << endl;
        cout << "Jumlah suku ke " << n << " adalah " << sum << endl;
    }
    return 0;
}

