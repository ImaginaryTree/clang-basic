//cSpell:disable
#include<stdio.h>

int main(){
    int num;
    float hasil = 0;
    printf("Insert = ");
    scanf("\n%i", &num);
    printf("Number = ");
    for(int i = 1; i <= num; i++){
        printf("%i ",i);
        if(i%10==0){
            printf("\n         ");
        }
        hasil = hasil + i;
    }
    float means = hasil/num;
    printf("\nSum  = %.2f", hasil);
    printf("\nMean = %.2f", means);
}