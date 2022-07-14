/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 5,b = 7,c = 14;
    float hasil;
    
    printf("%i - %i / %i         : %.2f \n",a,b,c, hasil = (float) a-b/c);
    printf("%i + %i x %i         : %.2f \n",b,c,a, hasil = (float) b+c*a);
    printf("%i x %i / %i          : %.2f \n",3,b,b, hasil = (float) 3*b/c);
    printf("%i + %i x %i x %i    : %.2f \n",c,b,a,c, hasil = (float) c+b*a*c);
    printf("%i / %i x (%i + %i)   : %.2f \n",c,2,a,b, hasil = (float) c/2*(a+b));
    printf("(%i + %i) x (%i / %i) : %.2f",a,b,c,2, hasil = (float) (a+b)*(c*2));
}