//create swap function 
void swap(int* a, int* b)
{
//implement swap function
int temp = *a;
*a = *b;
*b = temp;
}

void sort(int arrayofval[], int n)
{
int burst = 0;
do
{
  for(int i=0, burst = 0; i < n; i++)
  if(arrayofval[i] > arrayofval[i+1])
  {
  swap(&arrayofval[i], &arrayofval[i+1]);
  burst++; 
  }
}
while(burst != 0);
return; 
