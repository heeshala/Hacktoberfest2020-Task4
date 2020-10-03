#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[5]={58,89,71,35,6};
    int swap;
    for(int a=0; a<5;a++)

        for(int j=a+1;j<5;j++)
        {
            if (arr[a]>arr[j]);
            {
                swap=arr[a];
                arr[a]=arr[j];
                arr[j]=swap;

        }
    }
}

    for(int a=0; a<5;a++){

            printf("%d\n ",arr[a]);
        }
