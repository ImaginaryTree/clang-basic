//cSpell:disable
#include <stdio.h>
#include <math.h>
int main()
{
    int pilih,s,hasil;
    printf("1.Menghitung luas persegi\n2.menghitung keliling persegi\nmasukan sisi : ");
    scanf("\n%i", &pilih);
    switch(pilih)
    {
        case 1:
            printf("Masukan sisi luas persegi : ");
            scanf("%i", &s);
            hasil = pow(s,2);
            printf("hasil luas persegi : %i",hasil);
            break;
        case 2:
            printf("Masukan sisi keliling persegi : ");
            scanf("%i", &s);
            hasil = 4*s;
            printf("hasil keliling persegi : %i",hasil);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}