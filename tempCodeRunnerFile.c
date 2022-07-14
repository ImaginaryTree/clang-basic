//cSpell:disable
#include<stdio.h>

struct data{
    char single;
}typedef mine;

int main(){
    mine x;
    x.single = 'A';
    printf("%c",x.single);
    return 0;
}