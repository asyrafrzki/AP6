#include <stdio.h>

int main(){
    char nama[30];
    int nim;
    char kom;
    float ip;
    printf("hello world\n");

    printf("Masukkan nama: ");
    gets(nama);

    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan kom: ");
    scanf(" %c", &kom);

    printf("Masukkan IP: ");
    scanf(" %f", &ip);

    printf("nama:");
    puts(nama);
    printf("NIM: %d\n", nim);
    printf("kom: %c\n", kom);
    printf("IP: %.2f\n", ip);
    printf("Hello World\n");

    return 0;
}
