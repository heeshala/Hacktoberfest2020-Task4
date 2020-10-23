#include <studio.h>

int main()
{
     int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2); // user input

    // calculating sum
    sum = number1 + number2;      // calculation

    printf("%d + %d = %d", number1, number2, sum);
    return 0; // return statement

    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6}; // defines
    
    
    do{
        swap=false;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1]; // logic implementing
                arr[j+1]=temp
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<n;m--)
        {
            printf("%s ",arr[l]); // final statement
        }
}
