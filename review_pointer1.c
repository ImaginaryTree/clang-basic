//cSpell:disable
#include <stdio.h>

int main()
{
    
    int word[2][4];
    for(int i = 2; i > 0; i--){
        for(int j = 4; j > 0; j--){
            printf("masukan : ");
            scanf("\n%i", &word[i][j]);
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("%i ",word[i][j]);
        }
    }
    return 0;
}