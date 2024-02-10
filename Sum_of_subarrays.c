#include<stdio.h>
#include<conio.h>
int main()
{int n,ans=0;
  printf("Enter the size of array   " );
  scanf("%d",&n );
  int arr[n];
  printf("Enter the array  " );
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i] );
  for(int i=0;i<n;i++)
{  int sum=0;
  for(int j=i;j<n;j++)
  { sum+=arr[j];
    ans+=sum;
    printf("%d  ",sum);}
}
  printf("\nGrand sum =%d  ",ans);
}
