//cSpell:disable
#include <stdio.h>
#include <math.h>
int main() {
    int menu;
    char choice;
    do
    {
        printf("Menu Makanan\n1.Nasi Goreng = 15.000\n2.Soto Madura = 20.000\nMasukan no yang dipilih : ");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            printf("anda membeli Nasi Goreng\nHarganya : 15.000\n");
            printf("apakah anda ingin memesan lagi ? (y/n)\n");
            scanf(" %c",&choice);
            break;
        case 2:
            printf("anda membeli Soto madura\nHarganya : 20.000\n");
            printf("apakah anda ingin memesan lagi ? (y/n)\n");
            scanf(" %c",&choice);
            break;
        default:
            printf("Pesanan anda tidak ad di menu\n");
            printf("apakah anda ingin memesan lagi ? (y/n)\n");
            scanf(" %c",&choice);
            break;
        }
    } while(choice == 'y');
    printf("silahkan dibayar di kasir");
    return 0;
}