#include<stdio.h>

int count=0;
int BinarySearch(int A[],int L,int H,int S)
{
 int M=(L+H)/2;
 if(L>H)
 return -1;
 if(S==A[M])
 {
  printf("%d is Found at Index %d\n",S,M);
  exit(0);
 } 
 
 else if(S>A[M])
  return BinarySearch(A,M+1,H,S);
 
 else
  return BinarySearch(A,L,M-1,S);  
 
  
}

int main()
{
 int N,S,M,U,L;
 printf("Enter Size of Array: ");
 scanf("%d",&N);
 int arr[N];
 printf("Enter Elements in Ascending Order\n");
 for(int i=0;i<N;i++)
 {
  printf("Enter Element %d: ",(i+1));
  scanf("%d",&arr[i]);
 }
 printf("ARRAY: ");
 for(int i=0;i<N;i++)
  printf("| %d ",arr[i]);
 printf("|\n");
 printf("Enter Element to search: ");
 scanf("%d",&S);
 BinarySearch(arr,0,N-1,S);
 
 if(BinarySearch(arr,0,N-1,S)==-1)
  printf("%d NOT FOUND\n",S);
 
 return 0;
}


