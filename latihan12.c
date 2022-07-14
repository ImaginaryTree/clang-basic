//cSpell:disable
#include<stdio.h>

float segitiga(int sisi1,int sisi2){
    float ll;
    ll = (0.5 *(sisi1*sisi2));
    return ll;
}

int main(){
    int pil, sisi1, sisi2;
    float x;

    printf("\nProgram menghitung luas dengan fungsi \n\n");
    printf("Pilih salah satu yang akan anda hitug\n");

    printf("Masukan sisi 1 yang akan di hitung = ");
    scanf("%i", &sisi1);
    printf("Masukan sisi 2 yang akan di hitung = ");
    scanf("%i",&sisi2);

    x =  segitiga(sisi1, sisi2);
    printf("Hasilnya adalah %.1f", x);
    return 0;
}