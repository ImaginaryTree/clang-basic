//cSpell:disable
#include <stdio.h>

int main()
{
    int x;
    printf("Masukan jumlah element yang di inginkan = ");
    scanf(" \n%i", &x);
    char word[x];
    printf("Masukan huruf yang di inginkan = ");
    scanf(" \n%s", &word);

    for(int i=0;i<x;i++){
        for(int y = 0; y <= i; y++)
        {
            printf("%c ", word[y]);
        }
        printf("\n");
    }
	return 0;
}