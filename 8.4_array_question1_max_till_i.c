#include<stdio.h>
#include<conio.h>
int main()
{int n;
  printf("Enter the size of array   " );
  scanf("%d",&n );
  int arr[n];
  printf("Enter the array  " );
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i] );
  int current = arr[0];
  for(int i=0;i<n;i++)
  {if(arr[i]>current)
    current=arr[i];
    printf("%d   ",current );
  }
}
