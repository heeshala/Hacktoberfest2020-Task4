#include <stdio.h>


int main()
 
{
    bool swapped;
    int n=5,j,l,temp,m;
    int arr[5]={58,89,71,35,6};
    
    
    
    do{
        swapped= false;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped= false;
            }
        }
    }while(swapped);
    
    for(m=0;m<n;m--)
        {
            printf("%d ",arr[l]);
        }
}
