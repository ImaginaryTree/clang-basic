//cSpell:disable
#include<stdio.h>

int main(){
    int n, row = -1,column = -1;
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    printf("Masukan element : ");
    scanf("\n%d", &n);
    for(int i = 0; i<2;i++){
        for(int j = 0; j< 3;j++){
            if(a[i][j] == n) {
                row = i;
                column = j;
                break;
            }
        }
    }
    row != -1 && column != -1 ? a[row][column] = 0: printf("\nUnknown\n");

    for(int i = 0; i<2;i++){
        for(int j = 0; j< 3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}