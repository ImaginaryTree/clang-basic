//cSpell:disable
#include <stdio.h>

int main()
{
    int avgrapot,univ,kelasterakhir;
    printf("Penerimaan Jalur SNMPTN\nsilahkan pilih univ yang diinginkan\n1.ITS\n2.ITB\n3.Universitas Indonesia\n4.Universitas Telkom\npilih : ");
    scanf("%i", &univ);
    switch(univ){
        case 1:
            printf("Masukan kelas : ");
            scanf("\n%i", &kelasterakhir);
            if(kelasterakhir>=12){
                printf("masukan nilai rata-rata rapot : ");
                scanf("\n%i",&avgrapot);
                if(avgrapot>=85){
                    printf("silahkan tunggu informasi lebih lanjut\n terkait lulusnya");
                    break;
                }else{
                    printf("rata-rata nilai rapot tidak memenuhi persyaratan");
                    break;
                }
            }else{
                printf("Anda belum bisa untuk mendaftar kuliah");
                break;
            }
        case 2:
            printf("Masukan kelas : ");
            scanf("\n%i", &kelasterakhir);
            if(kelasterakhir>=12){
                printf("masukan nilai rata-rata rapot : ");
                scanf("\n%i",&avgrapot);
                if(avgrapot>=85){
                    printf("silahkan tunggu informasi lebih lanjut\n terkait lulusnya");
                    break;
                }else{
                    printf("rata-rata nilai rapot tidak memenuhi persyaratan");
                    break;
                }
            }else{
                printf("Anda belum bisa untuk mendaftar kuliah");
                break;
            }
        case 3:
            printf("Masukan kelas : ");
            scanf("\n%i", &kelasterakhir);
            if(kelasterakhir>=12){
                printf("masukan nilai rata-rata rapot : ");
                scanf("\n%i",&avgrapot);
                if(avgrapot>=85){
                    printf("silahkan tunggu informasi lebih lanjut\n terkait lulusnya");
                    break;
                }else{
                    printf("rata-rata nilai rapot tidak memenuhi persyaratan");
                    break;
                }
            }else{
                printf("Anda belum bisa untuk mendaftar kuliah");
                break;
            }
        case 4:
            printf("Masukan kelas : ");
            scanf("\n%i", &kelasterakhir);
            if(kelasterakhir>=12){
                printf("masukan nilai rata-rata rapot : ");
                scanf("\n%i",&avgrapot);
                if(avgrapot>=85){
                    printf("silahkan tunggu informasi lebih lanjut\n terkait lulusnya");
                    break;
                }else{
                    printf("rata-rata nilai rapot tidak memenuhi persyaratan");
                    break;
                }
            }else{
                printf("Anda belum bisa untuk mendaftar kuliah");
                break;
            }
        default:
            printf("error");
            break;
    }
    return 0;
}