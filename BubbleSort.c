#include <stdio.h>
#include <stdbool.h>


int main()
{
    bool swap;
    int n=5,j;
    int arr[5]={58,89,71,35,6};//Defining array elements
    
    /*
     * Start of bubble sort algorithom implementation
    */
    do{
        swap=false;
        
        for(j=0;j<n-1;j++)//Iterating through the array eleemts
        {
            
            if (arr[j]>arr[j+1])//Swap array elemets if required
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }
       
     
    }while(swap);
    /*
     * End of bubble sort algorithom implementation
    */
    
    for(int m=0;m<n;m++)//Printing Sorted array
        {  
            printf("%d",arr[m]);//Print array element
            if( m < n-1){
            printf(",");//Foramatting the output
             }
        }
}
