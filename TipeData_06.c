/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char huruf = 's';
    char hari[] = "senin";
    int a = 13;
    float b = 89.72;
    double c = 123.838374;
    
    int tanggal = 13;
    
    printf("tipe data char    : %c   \n", huruf);
    printf("tipe data array   : %s   \n", hari);
    printf("tipe data integer : %i   \n", a);
    printf("tipe data float   : %.2f \n", b);
    printf("tipe data double  : %.6f \n", c);
    
    
    return 0;
}