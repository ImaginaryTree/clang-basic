//cSpell:disable
#include<stdio.h>



float segitiga(int sisi1,int sisi2){
    float l1;
    l1 = (0.5 *(sisi1*sisi2));
    return l1;
}

float persegipanjang(int a2, int b2){
    int l2;
    l2 = a2*b2;
    return l2;
}

float layang(int a3, int b3){
    float l3;
    l3 = (0.5 *(a3*b3));
    return l3;
}
float pilihan(int pil, int sisi1, int sisi2){
    switch(pil){
        float x;
        case 1:
            x =  segitiga(sisi1, sisi2);
            return x;
            break;
        case 2:
            x =  persegipanjang(sisi1, sisi2);
            return x;
            break;
        case 3:
            x =  layang(sisi1, sisi2);
            return x;
            break;
        default:
            return  0;
            break;
    }
}
int main(){
    int pil, sisi1, sisi2;
    float x;

    printf("\nProgram menghitung luas dengan fungsi \n\n");
    printf("Pilih salah satu yang akan anda hitug\n");

    printf("1. segitiga\n");
    printf("2. Persegi panjang\n");
    printf("3. layang - layang\n");
    printf("Pilihan anda = ");
    scanf("%i", &pil);

    printf("\nMasukan sisi 1 yang akan di hitung = ");
    scanf("%i", &sisi1);
    printf("Masukan sisi 2 yang akan di hitung = ");
    scanf("%i",&sisi2);


    printf("Hasilnya adalah %.1f", pilihan(pil,sisi1,sisi2));
    return 0;
}