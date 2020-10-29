#include<stdio.h>
#include <stdbool.h>

int main()
{
    bool swap;
    int n=5;
    int arr[5]={58,89,71,35,6};
    
    do{
        swap=false;
        for(int j=0;j<n-1-j;j++)
        {
            if (arr[j+1]<arr[j]);
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
  
    }while(swap);
    
    for(int m=0; m<n; m++){
       printf("%d ",arr[m]);
    }
}
