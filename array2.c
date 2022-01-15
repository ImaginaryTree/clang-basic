//cSpell:disable
#include <stdio.h>

int main()
{
    int x,y,z,z1 = 0,z2 = 0,tmp2;
    int temp[4];
	int A[2][2], B[2][2], C[2][2];
    float temp2[4], invers[2][2],C2[2][2];

    //menginputkan nilai matrix A dan B
    for(x = 0; x<2; x++){
        for(y = 0; y<2; y++){
            printf("masukan nilai matriks A = ");
            scanf("\n%d", &A[x][y]);
        }
    }
    printf("------------------------------------\n");
    for(x = 0; x<2; x++){
        for(y = 0; y<2; y++){
            printf("masukan nilai matriks B = ");
            scanf("\n%d", &B[x][y]);
        }
    }
    printf("\n");
    //perkalian
    int tmp = 0;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            for(z=0;z<2;z++){
                tmp += A[x][z] * B[z][y];
            }
            C[x][y] = tmp;
            tmp = 0;
        }
    }
    //hasil perkalian Matrix A dan B
    printf("hasil perkalian Matrix A dan B \n");
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            printf("%d ", C[x][y]);
        }
        printf("\n");
    }
    //inverse matrix
    printf("\n");
    printf("Invers Matrix\n");
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            printf("%.d  ", B[x][y]);
        }
        printf("\n");
    }
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            temp[z1] = B[x][y];
            z1++;
        }
    }
    int len = sizeof(temp)/sizeof(temp[0]);
    for(x = 0;x<len;x++){
        if(x==1 || x==2){
            temp[x] = temp[x]* -1 ;
        }else if(x==0){
            tmp2 = temp[x];
            temp[x] = temp[x+3];
            temp[x+3] = tmp2;
        }
    }
    printf("proses pertama invers\n");
    for(x = 0;x<len;x++){
        if (x == 2){
            printf("\n");
        }
        printf("%.d ",temp[x]);
    }
    puts("\n");
    float res = (temp[0]*temp[3]) - (temp[1]*temp[2]);
    float div = 1/res;

    printf("proses kedua invers\n");
    for(x = 0;x<len;x++){
        temp2[x] = div*temp[x];
        if (x == 2){
            printf("\n");
        }
        printf("%.1f ",temp2[x]);
    }
    puts("\n");
    //memndahkan nilai dari array 1 dimensi ke 2 dimensi
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            invers[x][y] = temp2[z2];
            //printf("%d-\n",z1);
            z2++;
        }
    }
    printf("Hasil Inverse matrix B\n");
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            printf("%.1f  ", invers[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    //hasil akhir
    float tmp3 = 0;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            for(z=0;z<2;z++){
                tmp3 += A[x][z] * invers[z][y];
            }
            C2[x][y] = tmp3;
            tmp3 = 0;
        }
    }
    printf("\nhasil perkalian Matrix A dan invers B \n");
    for(x = 0;x<2;x++){
        for(y = 0;y<2;y++){
            printf("%.1f ", C2[x][y]);
        }
        printf("\n");
    }
    return 0;
}