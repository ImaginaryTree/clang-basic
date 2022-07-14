//cSpell:disable
#include<stdio.h>


int main(){
    int a,t;
    float l;
    printf("Menghitung Luas segitiga");

    printf("\n masukan Alas = ");
    scanf("%d",&a);

    printf("\n Masukan tinggi = ");
    scanf("%d",&t);

    l = 0.5 * a * t;
    printf("\nLuas segitia adalah %.1f cm ",l);
    printf("\n");
    return 0;
}