#include <stdio.h>

int main()
{
    int swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=0;
        for(j=0;j<n;j++)
        {
            if (arr[j+1]>arr[j]);
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=0;
            }
        }
    }while(swap);
    int m;
    for(m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
