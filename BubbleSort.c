#include <stdio.h>


int main()
{
    int n=5,j,temp;
    int arr[5]={58,89,71,35,6};
    
    
    for(int i=0;i<n-1;i++){
        
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    
    for(int m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
        return 0;
}
