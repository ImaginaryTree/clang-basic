#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[5];
    FILE *fptr;
    fptr = fopen("parktikum.txt","a");
    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }
    for(int i = 0; i < 5; i++){
        // mengambil input dari user
        printf("Isi number baris ke-%d: ", i+1);
        scanf("%d",&num[i]);
        // menulis ke text ke file
        fprintf(fptr,"%d",num[i]);
    }
    fclose(fptr);
    return 0;
}