#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//cSpell:disable
//data ipk > 3.00
struct data{
    char nama[50];
    int nim;
    char alamat[50];
    char jeniskelamin[10];
    float ipk;

}mhs[25];


int main(){
    int p,i;         // p = untuk pilihan, i = perulangan
    char cekipk;     // Pengecekan bila IPK < atau > 3.00
    char ulang;      //digunakan untuk kembali ke menu utama
    int edit;
    int save = 0;
    do{
        printf("Menu Data Mahasiswa :\n\n
        1. Lihat semua data mahasiswa.\n
        2. Masukkan 1 data mahasiswa.\n
        3. Masukkan 3 data mahasiswa.\n
        4. Lihat data mahasiswa yang memiliki IPK < 3.00\n
        5. Lihat data mahasiswa berdasarkan urutan NIM ascending\n
        6. Edit data mahasiswa\n
        0. Exit\n\n
        Pilih sesuai nomor depan = ");
        scanf("\n%d",&p);
        switch(p){
            case 1:
                printf("Semua Data Mahasiswa\n");
                for(i = 0;i<save;i++){
                    printf("Data Mahasiswa ke %d\n\n",i+1);
                    printf("Nama          : %s\n",mhs[i].nama);
                    printf("NIM           : %d\n",mhs[i].nim);
                    printf("Alamat        : %s\n",mhs[i].alamat);
                    printf("Jenis Kelamin : %s\n",mhs[i].jeniskelamin);
                    printf("IPK           : %.2f\n\n",mhs[i].ipk);
                }

                printf("Apakah anda ingin kembali ke menu utama?(y/t) : ");
                scanf(" %c",&ulang);
                break;
            case 2:
                printf("Masukan Data Mahasiswa :");
                scanf(" %c",&cekipk);
                printf("Input Nama = ");
                scanf(" %s",mhs[save].nama);
                printf("Input Nim = ");
                scanf("%d",&mhs[save].nim);
                printf("Input Alamat = ");
                scanf(" %s",mhs[save].alamat);
                printf("Input Jenis Kelamin = ");
                scanf(" %s",&mhs[save].jeniskelamin);
                printf("Input IPK = ");
                scanf("%f",&mhs[save].ipk);
                save+=1;
                printf("Apakah anda ingin kembali ke menu utama?(y/t) : ");
                scanf(" %c",&ulang);
                break;
            case 3:
                printf("Masukan Data :");

                for(i = save;i<save+3;i++){
                    printf("Input Nama = ");
                    scanf(" %s",mhs[i].nama);
                    printf("Input Nim = ");
                    scanf("%d",&mhs[i].nim);
                    printf("Input Alamat = ");
                    scanf(" %s",mhs[i].alamat);
                    printf("Input Jenis Kelamin = ");
                    scanf(" %s",&mhs[i].jeniskelamin);
                    printf("Input IPK = ");
                    scanf("%f",&mhs[i].ipk);
                }
                save+=3;
                printf("Apakah anda ingin kembali ke menu utama?\n(y/t) : ");
                scanf(" %c",&ulang);
                break;
            case 4:
                printf("Data Mahasiswa IPK < 3.00");
                for(i = 0;i<save1;i++){
                    printf("Data Mahasiswa ke %d\n\n",i);
                    printf("Nama          : %s\n",mhs1[i].nama);
                    printf("NIM           : %d\n",mhs1[i].nim);
                    printf("Alamat        : %s\n",mhs1[i].alamat);
                    printf("Jenis Kelamin : %s\n",mhs1[i].jeniskelamin);
                    printf("IPK           : %.2f\n\n",mhs1[i].ipk);
                }
                printf("Apakah anda ingin kembali ke menu utama?\n(y/t) : ");
                scanf(" %c",&ulang);
                break;
            case 6:
                printf("List data Mahasiswa : ");
                for(i = 0;i<save;i++){
                    printf("Data Mahasiswa ke %d\n\n",i+1);
                    printf("Nama          : %s\n",mhs[i].nama);
                    printf("NIM           : %d\n",mhs[i].nim);
                    printf("Alamat        : %s\n",mhs[i].alamat);
                    printf("Jenis Kelamin : %s\n",mhs[i].jeniskelamin);
                    printf("IPK           : %.2f\n\n",mhs[i].ipk);
                }
                    printf("Pilih data yang ingin di edit : ");
                    scanf("%d",&edit);
                    printf("Data Mahasiswa ke -%d\n\n",edit);
                    printf("Nama          : %s\n",mhs[edit].nama);
                    printf("NIM           : %d\n",mhs[edit].nim);
                    printf("Alamat        : %s\n",mhs[edit].alamat);
                    printf("Jenis Kelamin : %s\n",mhs[edit].jeniskelamin);
                    printf("IPK           : %.2f\n\n",mhs[edit].ipk);
                    printf("Edit Data mahasiswa ke-%d\n",&edit);
                    printf("Input Nama = ");
                    scanf(" %s",mhs[edit].nama);
                    printf("Input Nim = ");
                    scanf("%d",&mhs[edit].nim);
                    printf("Input Alamat = ");
                    scanf(" %s",mhs[edit].alamat);
                    printf("Input Jenis Kelamin = ");
                    scanf(" %s",&mhs[edit].jeniskelamin);
                    printf("Data Mahasiswa ke -%d setelah di edit \n\n",edit);
                    printf("Nama          : %s\n",mhs[edit].nama);
                    printf("NIM           : %d\n",mhs[edit].nim);
                    printf("Alamat        : %s\n",mhs[edit].alamat);
                    printf("Jenis Kelamin : %s\n",mhs[edit].jeniskelamin);
                    printf("IPK           : %.2f\n\n",mhs[edit].ipk);
                    printf("Apakah anda ingin kembali ke menu utama?(y/t) : ");
                    scanf(" %c",&ulang);
                break;
            default:
                printf("Pilihan tidak tersedia!!\nApakah anda ingin kembali ke menu utama?(y/t) : ");
                scanf(" %c",&ulang);
                break;
        }
        if(p == 6){

            printf("Apakah anda ingin kembali ke menu utama?(y/t) : ");
            scanf(" %c",&ulang);
        }
        else if(p == 0){
            printf("Program Berakhir!!! Terimakasih!!!\n");
            printf("Fadhlan S.J.\n1203210064\n");
            return 0;
        }
    }while(ulang == 'y');
    printf("Program Berakhir!!! Terimakasih!!!\n");
    printf("Fadhlan S.J.\n1203210064\n");


    return 0;
}