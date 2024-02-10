#include<stdio.h>
#include<conio.h>
int main()
{int n,sum=0;
  printf("Enter no. of elements  ");
  scanf("%d",&n );
  for (int i = 1; i <= n; i++)
  {
    sum+=i;
  }
  printf("%d",sum );
}
