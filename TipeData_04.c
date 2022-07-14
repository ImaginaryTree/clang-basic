/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    float keliling, luas;
    
    const float phi = 3.14;
    printf("r = ");
    scanf("%i", &r);
    
    luas = phi * r * r;
    keliling  = (float) 2 * phi * r ;
    
    printf("keliling dari lingkaran adalah = %.2f \n",luas);
    printf("keliling dari lingkaran adalah = %.2f",keliling);
}