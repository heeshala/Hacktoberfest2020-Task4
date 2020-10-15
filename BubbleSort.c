#include <stdio.h>
int main()
{
    int swap = 1;
    int n=5,j,temp;
    int arr[5]={58,89,71,35,6};
    int m;
   
    while(swap){
        swap = 0;
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap = 1;
        	}
        }
        
     
    }
    
    for(m=0;m<n;m++)
     {
          printf("%d ",arr[m]);
    }
        return 0;
}
