#include <stdio.h>

//main program
int main(){
    //deklarasi variabel
    char nama[30];
    int nim;
    char kom;
    float ip;
    printf("hello world\n");
    //input data
    printf("Masukkan nama: ");
    gets(nama);

    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan kom: ");
    scanf(" %c", &kom);

    printf("Masukkan IP: ");
    scanf(" %f", &ip);

    //tampilkan isi data yang di input
    printf("nama:");
    puts(nama);
    printf("NIM: %d\n", nim);
    printf("kom: %c\n", kom);
    printf("IP: %.2f\n", ip);
    printf("Hello World\n");

    return 0;
}
