#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool swap;
    int n=5,j,m,temp,i;
    int arr[]={58,89,71,35,6};

    for(i=0;i<n-1;i++)
    {
        swap = false;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }  
        }
        if(swap == false){
        break;
        }
    }
    
    for(m=0;m<n;m++)
        {
            printf("%d ",arr[m]);
        }
}
