//cSpell:disable
#include <stdio.h>
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10;i++){
        printf("array 1 dimensi : %d\n", array[i]);
    }



    int array2d[][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    printf("array 2 dimensi : %d\n", array2d[1][1]);

    for (int i = 0; i < 10; i++) {
    printf("%d ", array[i]);
    }
    return 0;
}
