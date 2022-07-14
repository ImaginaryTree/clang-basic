/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//cSpell:disable
#include <stdio.h>

int main()
{
    char nama[20];
    float nilaiTes = 0, avgRaport=0, usia=0;
    printf("Masukan Nama : ");
    fgets(nama,20,stdin);
    printf("Masukan Usia : ");
    scanf("\n%f", &usia);
    if(16<usia<21){
        printf("Masukan rata-rata nilai raport : ");
        scanf("\n%f", &avgRaport);
        if(avgRaport>=80){
            printf("silahkan pilih prgram studi yang diminati");
        } else if(70<=avgRaport<80){
            printf("anda diterima di program studi Elektro");
        } else if(65<=avgRaport<70){
            printf("anda diterima di program studi Elektro");
        } else if(avgRaport<65){
            printf("MABA ditolak");
        }
    }
    else{
        printf("Masukan Nilai tes : ");
        scanf("\n%f", &nilaiTes);
        if(nilaiTes>75){
            printf("Masukan rata-rata nilai raport : ");
            scanf("\n%f", &avgRaport);
            if(avgRaport>=80){
                printf("silahkan pilih prgram studi yang diminati");
            } else if(70<=avgRaport<80){
                printf("anda diterima di program studi Elektro");
            } else if(65<=avgRaport<70){
                printf("anda diterima di program studi Elektro");
            } else if(avgRaport<65){
                printf("MABA ditolak");
            }
        } else{
            printf("MABA ditolak");
        }
    }
}
