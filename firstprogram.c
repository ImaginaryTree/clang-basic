//cSpell:disable
#include <stdio.h>

int main()
{
    int bulan,tahun;
    printf("masukan Bulan : ");
    scanf("\n%i", &bulan);
    printf("masukan tahun : ");
    scanf("\n%i", &tahun);
    switch(bulan)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("memiliki 31 hari");
            break;
        case 4: case 6: case 9: case 11:
            printf("memiliki 30 hari");
            break;
        case 2:
            if(tahun % 4 == 0 ){
                printf("Bulan ini memiliki 29");
            } else {
                printf("Bulan ini memiliki 28");
            }
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}