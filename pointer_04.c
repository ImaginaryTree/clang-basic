//cSpell:disable
#include <stdio.h>
void copy(int *pArray,int *size){
    int cpy[*size];
    printf("Original = pArray[");
    for(int i = 0; i < *size; i++){
        printf("%d", pArray[i]);
        if(i != *size - 1){
            printf(", ");
        }
    }
    int *pCpy = cpy;
    printf("]\nCopy     = pCpy[");
    for(int i = 0; i < *size; i++){
        pCpy[i] = pArray[i];
        printf("%d", pCpy[i]);
        if(i != *size - 1){
            printf(", ");
        }
    }
    printf("]");
}
int main(){
    int size;
    printf("masukan size array : ");
    scanf("\n%d", &size);
    int array[size], cpy[size];
    for(int i = 0; i < size; i++){
        printf("array [%d] = ", i);
        scanf("\n%d", &array[i]);
    }
    copy(array, &size);
    //int *pArray = array;
    return 0;
}