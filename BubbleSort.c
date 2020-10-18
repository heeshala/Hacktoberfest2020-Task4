#include <stdio.h>
#include<stdbool.h>

int main()
{
    bool swap=true;
    int n=5,m,j,temp;
    m=n;
    int arr[5]={58,89,71,35,6};
    
    while(swap){
    	swap=false;
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        n-=1;
    }
    
    for(n=0;n<m;n++)
        {
            printf("%d ",arr[n]);
        }
    return 0;
}
