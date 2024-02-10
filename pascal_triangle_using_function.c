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
{int n;
 printf("Enter Number Of Rows  ");
 scanf("%d",&n );
 for(int i=0;i<=n;i++)
     {for (int j = 0; j <= i; j++)
           { int ncr = factorial(i)/(factorial(j)*factorial(i-j));
             if (ncr!=0)
            printf("%d  ",ncr );
            }
            printf("\n");
      }
}
