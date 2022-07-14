//cSpell:disable
#include<stdio.h>

int main(){
    int n,new, row = -1,column = -1;
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    printf("Masukan element yang ingin diganti : ");
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
    if(row != -1 && column != -1 ){
        printf("Masukan element baru: ");
        scanf("\n%d", &new);
        a[row][column] = new;
    }else{
        printf("\nUnknown\n");
    }

    for(int i = 0; i<2;i++){
        for(int j = 0; j< 3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}