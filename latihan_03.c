#include <stdio.h>
#include <stdlib.h>

int partisi(int array[],int Left ,int Right,int pivot){
    while(Left<=Right){
        while(array[Left]<pivot){
            Left++;
        }
        while(array[Right]>pivot){
            Right--;
        }
        if(Left<=Right){
            int temp = array[Left];
            array[Left] = array[Right];
            array[Right] = temp;
            Left++;
            Right--;
        }
    }
    return Left;
}

void quicksort(int array[],int Left,int Right){
    if (Left >= Right){
        int pivot = array[Right/2];
        int index = partisi(array,Left ,Right, pivot);
        quicksort(array,Left,index-1);
        quicksort(array,index,Right);
    }
}




int main(){
    int size;
    printf("Masukan size array : ");
    scanf("\n%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        printf("masukan element array : ");
        scanf("\n%d", &array[i]);
    }
    printf("Before = ");
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    quicksort(array,0,size-1);
    printf("After = ");
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
