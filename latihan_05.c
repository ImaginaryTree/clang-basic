//cSpell:disable
#include<stdio.h>

int main(){
    int harga;
    printf("Harga Makanan = ");
    scanf("\n%d", &harga);
    harga >= 5000 && harga<10000? printf("Murah"):
    (harga>37500 && harga <= 50000? printf("Mahal"):
    (harga>=10000 && harga <=37500? printf("Sedang"):printf("Tak Tersedia")));
}