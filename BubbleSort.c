#include <stdio.h>


int main()
{
    int swap;
    int n=5,j,i;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        }
    }while(swap);
    
    for(int m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
