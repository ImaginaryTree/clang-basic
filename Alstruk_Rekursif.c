//cSpell:disable
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3

int faktorial(int angka){
    if(angka==1){
        return 1;
    }else{
        return angka * faktorial(angka - 1);
    }
}

int fibonacci(int angka){
    if(angka ==0){
        return 0;
    }else if(angka == 1){
        return 1;
    }else{
        return fibonacci(angka - 1) + fibonacci(angka - 2);
    }
}

int ganjilgenap(int min, int max){
    if(min > max){
        return 0;
    }
    printf("%d", min);
    ganjilgenap(min + 2,max);
}

int fpangkat(int angka, int pangkat){
    if(pangkat == 0){
        return 1;
    }else{
        return angka * fpangkat(angka, pangkat -1);
    }
}


int main(){
    int pil, angka, pangkat,min, max;;
    bool stop = false;

    while(!stop){
        system("cls");
        printf("--contoh program rekursif--");
        printf("\n1. Program farktorial");
        printf("\n2. Program Bilangan fibonacci");
        printf("\n3. Program bilangan ganjil genap");
        printf("\n4. Program bilangan Berpangkat");
        printf("\n5. Kealuar");
        printf("\nMasukan pilihan :");
        scanf("%d", &pil);
        switch(pil){
            case 1:
                printf("\n masukan angka: ");
                scanf("%d", &angka);
                printf("\nHasil faktorial : %d \n\n",faktorial(angka));
                system("pause");
                break;
            case 2:
                printf("\nMasukan Jumlah bilangan : ");
                scanf("%d", &angka);
                printf("Hasil Bilangan Fibonacci : ");
                for(int i = 0; i<angka;i++){
                    printf(" %i", fibonacci(i));
                }
                printf("\n\n");
                system("pause");
                break;
            case 3:
                printf("\n Masukan Nilai minimum : ");
                scanf("%d", &min);
                printf("\nMasukan Nilai maksimum : ");
                scanf("%d", &max);

                printf("Bilangan Ganjil/Genap dari %d hingga %d adalah : %d",min,max,ganjilgenap(min,max));
                printf("\n\n");
                system("pause");
                break;
            case 4:
                printf("Masukan angka : ");
                scanf("%d", &angka);
                printf("\n Masukan Pangkat : ");
                scanf("%d", &pangkat);
                printf("\nHasil dari %d pangkat %d adalah %d", angka, pangkat, fpangkat(angka,pangkat));
                printf("\n\n");
                system("pause");
                break;
            default:
                stop = true;
                break;
        }
    }
    return 0;
}

