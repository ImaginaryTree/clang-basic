#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *genap;
    FILE *ganjil;
    int num[100];
    genap = fopen("genap.txt","a");
    ganjil= fopen("ganjil.txt","a");
    if(ganjil == NULL || genap == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(int i = 0; i < 5; i++){
        printf("Isi number baris ke-%d: ", i+1);
        scanf("%d",&num[i]);
        if (num[i]%2==0){
            fprintf(genap,"%d\n",num[i]);
        }
        else{
            fprintf(ganjil,"%d\n",num[i]);
        }
    }
    fclose(genap);
    fclose(ganjil);
    return 0;
}
