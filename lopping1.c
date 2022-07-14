//cSpell:disable
#include <stdio.h>

int main() {
    int num,i;
    printf("masukan jumlah nomor yang diinginkan : ");
    scanf("\n%i",&num);
    for(i=1;i<=num;i++){
        printf("%d",i);
        if(i%5==0){
            printf("\n");
        }
    }
    return 0;
}