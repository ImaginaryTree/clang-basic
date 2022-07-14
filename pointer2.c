
#include <stdio.h>
void tukar(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%p,%p",x,y);
    printf("sesudah ditukar\nnum 1 = %d\nnum 2 = %d\n",*x,*y);
}

int main(){
    int num1,num2;
    printf("Input num 1 = ");
    scanf("%d",&num1);
    printf("Input num 2 = ");
    scanf("%d",&num2);
    printf("sebelum ditukar\nnum 1 = %d\nnum 2 = %d\n",num1,num2);
    tukar(&num1,&num2);
    return 0;
}