#include <studio.h>


int main()
{
    bool swap=true;
    int n=5,j;
    int arr[n]={58,89,71,35,6};
    
    
    while(swap){
        swap=false;
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp
                swap=true;
            }
        }
    };
    
    for(m=0;m<n;m--)
        {
            printf("%s ",arr[m]);
        }
}
