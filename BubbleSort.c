#include <studio.h>


int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};
    int size = n;
    
    do{
        swap=false;
        for(j=0;j<n-1;j++)
        {
            if (arr[j+1]<arr[j]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
        --n;
    }while(swap);
    
    for(m=0;m<size;m++)
        {
            printf("%s ",arr[m]);
        }
}
