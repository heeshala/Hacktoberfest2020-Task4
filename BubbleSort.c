#include <stdio.h>
int main()
{

    int array[100],n,i,j,temp;
    
    printf("Enter the number elements in array\n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    
    printf("Before sorting array\n");
    for(i=0;i<n;i++)
    printf("%d",array[i]);
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting the array\n");
    for(i=0;i<n;i++)
        printf("%d",array[i]);
    return 0;
}
