//cSpell:disable
#include <stdio.h>

int main() {
    int x,y,num;
    printf("Masukan jumlah looping : ");
    scanf("\n%d",&num);
    //nested loop for
    for(x = 1; x < num; x++){
        printf("\n");
        for(y = 0;y<x;y++){
            printf("*");
        }
    }
	return 0;
}