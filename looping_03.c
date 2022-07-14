//cSpell:disable
#include <stdio.h>
#include <math.h>
int main() {
    int num,i;
    printf("masukan jumlah nomor yang diinginkan : ");
    scanf("\n%i",&num);
    for(i=1;i<=num;i++){
        int hasil = pow(2,i);
        printf("%i\n",hasil);
    }
    return 0;
}