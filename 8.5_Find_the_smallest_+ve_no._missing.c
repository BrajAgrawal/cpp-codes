#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{int n,ans=-1;
  printf("Enter the size of array   " );
  scanf("%d",&n );
  int arr[n];
  printf("Enter the array  " );
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i] );
  const int Num=1e6+2;
  bool check[Num];
  for(int i=0;i<Num;i++)
  check[i]=0;
  for(int i=0;i<n;i++)
  if(arr[i]>=0)
    check[arr[i]]=1;
  for(int i=1;i<Num;i++)
  if(check[i]==0)
    {ans =i;
      break;
    }
printf("%d ",ans );


}
