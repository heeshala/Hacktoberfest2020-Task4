#include <stdio.h>
#include <stdlib.h>

void bsort(int data[], int size){
    int i, swapping;
    
    do{
        swapping = 0;
        for(i = 0; i < size-1; i++)
        if(data[i] > data[i+1]){
            int temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp;
            swapping = i;
        }
    }while(swapping);
}

int main()
{
    return 0;
}
