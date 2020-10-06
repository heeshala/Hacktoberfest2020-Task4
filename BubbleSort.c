#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool swap;
    int n=5,j,temp,m;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        swap=false;
        for(j=1;j<n;j++)
        {
            if (arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                swap = true;
            }
        }
    }while(swap == true);
    
    for(m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
