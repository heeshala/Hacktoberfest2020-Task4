#include <stdio.h> 
#include<stdbool.h>
void swapped(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// An optimized version of Bubble Sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swap; 
   for (i = 0; i < n-1; i++) 
   { 
     swap = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swapped(&arr[j], &arr[j+1]); 
           swap = true; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (swap == false) 
        break; 
   } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
   
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {58,89,71,35,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 

