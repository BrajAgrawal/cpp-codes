#include<stdio.h>
#include<conio.h>
int main()
{int n,sum=0;
  printf("Enter Binary Number  ");
  scanf("%d",&n );
for(int i=n,k=0;i>0;i=i/10,k++)
{
  int rem=i%10;
  sum+=rem*pow(2,k);
}
printf("%d",sum);
return 0;
}
