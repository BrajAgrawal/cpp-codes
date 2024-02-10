#include<stdio.h>
#include<conio.h>
int main()
{
  int n,k=0,i=0;
  printf("Enter the size of array:     ");
  scanf("%d",&n );
  int arr[n];
  printf("Enter the elements of array respectively");
  for(int l=0;l<n;l++)
  scanf("%d",&arr[l] );
  for(;i<n;i++)
  {for(int j=i+1;j<n;j++)
  if(arr[i]==arr[j])
    { k++;
      break;}
      if(k==1)
      break;
  }
  if(k==1)
  printf("Element %d which first appears on location %d is repeating element with smallest index \n",arr[i],i+1 );
  else
  printf("No element is repeating");




}
