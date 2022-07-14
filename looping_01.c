//cSpell:disable
#include <stdio.h>

int main() {
    int i = 0;
    int x,y;
    //do while loop
    int a = 10;
    do
    {
        printf("Hello world\n");
        a--;
    }while (a >= 1);
    //nested loop for
    for(x = 1; x < 10; x++){
        printf("\n");
        for(y = 0;y<x;y++){
            printf("*");
        }
    }
    aritmatika(2,5);

	return 0;
}


int aritmatika(int a1, int b1){
    int hasil = a1 + b1;
    printf("%d", hasil);
}





















/*void lol(char word[]){
    printf("%s\n", word);
}*/