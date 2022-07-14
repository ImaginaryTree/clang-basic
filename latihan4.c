//cSpell:disable
#include<stdio.h>

int main(){
    int a,b,hasil;
    scanf("\n%i", &a);
    scanf("\n%i", &b);
    hasil = a - b;
    if(hasil < 0){
        printf("selisih = %i",hasil*-1);
    }else{
        printf("selisih = %i",hasil);
    }
}