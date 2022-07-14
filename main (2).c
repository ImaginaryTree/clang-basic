/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    printf("A : ");
    scanf("%i\n", &a);
    printf("B : ");
    scanf("%i\n", &b);
    
    float hasil = (float) a/b;
    
    printf("hasilnya adalah : %.2f", hasil);

    return 0;
}
