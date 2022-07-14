//cSpell:disable
#include<stdio.h>

int main(){
    int i = 28,j=i;
    do{
        if(i % 3 == 0){
            printf("%d ", i);
            if(i%10==0){
                printf("\n");
            }
        }
        i++;
    }while(i<90);
    printf("\n\n");
    while(j<90){
        if(j % 3 == 0){
            printf("%d ", j);
            if(j%10==0){
                printf("\n");
            }
        }
        j++;
    }
}