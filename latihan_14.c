//cSpell:disable
#include<stdio.h>


int main(){
    char array[][3] = {{'a'},{'b'},{'c'}};
    int x;
    x = sizeof(array);
    printf("%d\n", x);
    return 0;
}