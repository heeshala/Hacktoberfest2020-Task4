#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    int temp;

    do{
        swap=false;
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
    }while(swap);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
