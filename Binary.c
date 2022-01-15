#include <stdio.h>
int BinarySearch(int array[], int start_index, int end_index, int element){
    while (start_index <= end_index){
        int middle = (end_index + start_index )/2;
        if (array[middle] == element)
            return middle;
        if (array[middle] < element)
            start_index = middle + 1;
        else{
            end_index = middle - 1;
        }
    }
    return -1;
}
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    int element;
    printf("Masukan Element yang dicari : ");
    scanf("\n%d", &element);
    int found_index = BinarySearch(array, 0, n-1, element);
    if(found_index == -1 ) {
        printf("Element not found in the array ");
    }
    else {
    printf("Element found at index : %d",found_index);
    }
    return 0;
}