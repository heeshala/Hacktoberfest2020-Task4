#include <studio.h>


int main()
{
    // bool swap;
    int n=5,j,temp,m;
    int arr[5]={58,89,71,35,6};
    
    
    do{
        // swap=false;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp
                // swap=false;
            }
        }
    // }while(swap);
    }while(n--);
    for(m=0;m<5;m++)
        {
            printf("%d ",arr[m]);
        }
}
