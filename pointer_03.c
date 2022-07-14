//cSpell:disable
#include <stdio.h>

int main(){
    int size;
    printf("masukan size array : ");
    scanf("\n%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        printf("array [%d] = ", i);
        scanf("\n%d", &array[i]);
    }
    int *pArray = array;
    printf("%p \n", pArray);
    printf("semua element array[");
    for(int i = 0; i < size; i++){
        printf("%d", pArray[i]);
        if(i != size - 1){
            printf(", ");
        }
    }
    printf("]");
    return 0;
}