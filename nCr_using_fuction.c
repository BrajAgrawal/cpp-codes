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
{ int n,r;
  printf("Enter n and r ");
  scanf("%d %d",&n,&r );
  int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  printf("%d",ncr);
}
