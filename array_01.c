//cSpell:disable
#include <stdio.h>

int main()
{
	int nilai[]={8,9,3,1,10,23,2,5,4};
    int temp = 0, lenght = sizeof(nilai)/ sizeof(nilai[0]);
    printf("lenght : %d\n\n",lenght);
    for (int x=0;x<lenght;x++){
        for (int y=0;y<lenght ;y++){
            if (nilai[x]<nilai[y]){
                temp=nilai[x];
                printf("temp : %d\n\n",temp);
                nilai[x]=nilai[y];
                printf("nilai[] : %d\n\n",nilai[x]);
                nilai[y]=temp;
                }
        }
    }
    for(int p = 0; p < lenght; p++)
    {
        printf("%d ",nilai[p]);
    }
	return 0;
}