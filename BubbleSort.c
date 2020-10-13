#include <stdio.h>
#include <stdbool.h>


int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(j=1;j<n;j++)
        {
            if (arr[j]<arr[j-1]);
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp
                swap=false;
            }
        }
    }while(swap==true);
    
    for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
}
