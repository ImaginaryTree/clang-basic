//cSpell:disable
#include<stdio.h>

struct mahasiswa{
    int nim;
    char nama[50];
    char jk[15];
    float ipk;
};

int main(){
    struct mahasiswa data[5];
    //for(int i = 0; i<5;i++){1203210016
        printf("\n  Input Data ke");
        printf("\nMasukan nim  = ");
        scanf("\n%d", &data[0].nim);
        printf("Masukan Nama  = ");
        scanf(" \n%s", &data[0].nama);
        printf("Masukan jenis = ");
        scanf(" \n%s", &data[0].jk);
        printf("Masukan IPK   = ");
        scanf("\n%f", &data[0].ipk);
    //}
    printf("\n|    NIM   |    Nama   |    JK    |     IPK     |\n");
    //for(int i = 0; i<5;i++){
        printf(" %d",data[0].nim);
        printf(" %s",data[0].nama);
        printf(" %s",data[0].jk);
        printf(" %f",data[0].ipk);
        printf("\n");
    //}
    return 0;
}