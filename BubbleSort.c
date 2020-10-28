
 #include <stdio.h>
 #include <stdbool.h>

int main()
{
    bool swap=true;
    int n=5,j;
    int arr[5]={58,89,71,35,6};

    int iteration=n-1;

    do{
        swap=false;
        for(j=0;j<iteration;j++)
        {
            if (arr[j]>arr[j+1]);
            {
                int temp;
                swap=true;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            iteration--;
        }
    } while (swap);

  for(int m=0;m<n;m++)
        {
            printf("%d,",arr[m]);
        }
 }
