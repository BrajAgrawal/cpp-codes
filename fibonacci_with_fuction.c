#include<stdio.h>
#include<conio.h>
#include<math.h>
int fibonacci(int a)
{int sum=0,j=0,k=1;
  for(int i=1;i<=a;i++)
  { printf("%d \n",j );
     sum=j+k;
     j=k;
     k=sum;
   }

  return 0;
}
void main()
{ int num;
  printf("Enter Number Of Elements  ");
  scanf("%d",&num );
  fibonacci(num);
}
