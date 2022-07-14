//cSpell:disable
#include <stdio.h>

int by_reference(int *a, int *b, int *total){
    total[0] =  *a + *b;
    total[1] =  *a - *b;
    total[2] =  *a * *b;
    return *total;
}
int main(){
    int num1, num2, total[3];
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *hasil;

    printf("num1 : ");
    scanf("%d", ptr1);
    printf("num2 : ");
    scanf("%d", ptr2);

    by_reference(ptr1, ptr2, total);

    printf("sum = %d\n", total[0]);
    printf("Dif = %d\n", *(total + 1));
    printf("Mult = %d\n", total[2]);
    return 0;
}