#include <stdio.h>

int main()
{
    int n;
    scanf("\n%d", &n);
    int numRay[n];
    for(int i = 0; i<n ; i++){
        scanf("\n%d", &numRay[i]);
    }

    // count the frequency
    for(int i = 0; i < n; i++){
        numRay[numRay[i] % n] = numRay[numRay[i] % n] + n;
    }
    printf("The repeating elements are : ");
    for (int i = 0; i < n; i++) {
        if (numRay[i] >= n * 2) {
            printf("%d ", i);
        }
    }
    return 0;
}
