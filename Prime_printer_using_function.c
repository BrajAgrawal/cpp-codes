#include<stdio.h>
#include<conio.h>
#include<math.h>
int printprime(int num1,int num2)
{
  for(int i=num1;i<=num2;i++)
  { int k=0;
    for(int j=2;j<=sqrt(i);j++)
     if(i%j==0)
      {k=1;
        break;
      }
    if(k==0)
    printf("%d \n",i );
  }
  return ;
}
void main()
{ int a,b;
  printf("Enter Range ");
  scanf("%d %d",&a,&b );
  printprime(a,b);
}
