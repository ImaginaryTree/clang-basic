//cSpell:disable
#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int *pnum1 = &num1;
    int *pnum2 = &num2;

    printf("Sum             = %d\n",*pnum1 + *pnum2);
    printf("Difference      = %d\n",*pnum1 - *pnum2);
    printf("Mutiply         = %d\n",*pnum1 * *pnum2);
    return 0;
}