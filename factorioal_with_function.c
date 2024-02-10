#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int a)
{int fac=1;
  for(int i=a;i>1;i--)
   fac*=i;
   return fac;
}
void main()
{ int num;
  printf("Enter Number  ");
  scanf("%d",&num );
  printf("%d",factorial(num));
}
