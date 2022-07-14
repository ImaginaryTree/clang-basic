//cSpell:disable
#include<stdio.h>

int main(){
    int andi = 500000, deni = 300000;

    char language[][20] = {"Lovebird","cimblek gunung","murai batu","kenari"};
    int price[] = {25000,175000,1500000,500000};
    printf("Burung yang bisa dibeli oleh andi adalah \n");
  // Dispaying strings
    for(int i=0;i<4;i++){
    if(andi >= price[i]){
        printf("- %s",language[i]);
        printf(" = %d\n",price[i]);
    }
    }
    printf("\nBurung yang bisa dibeli oleh deni adalah \n");
    for(int i=0;i<4;i++){
    if(deni >= price[i]){
        printf("- %s",language[i]);
        printf(" %d\n",price[i]);
    }
    }
}