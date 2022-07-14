/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int alas, tinggi;
    
    //meminta sebuah inputan tinggi segitiga ke user menggunakan 
    //function scanf()
    printf("masukan tinggi : ");
    scanf("\n %i", &tinggi);
    
    //meminta sebuah inputan alas segitiga ke user menggunakan
    //function scanf()
    printf("masukan alas : ");
    scanf("\n %i", &alas);
    
    /*menghitung luas segitigas dan melakukan konfersi dari
    interger ke float*/
    float luas = (float) 1 / 2 * alas * tinggi;
    
    //mengcetak hasil perhitungan
    printf("hasil dari luat segitiga sama kaki adalah: %.2f", luas);

    return 0;
}