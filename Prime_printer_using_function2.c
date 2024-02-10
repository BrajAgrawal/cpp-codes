#include<stdio.h>
#include<conio.h>
#include<math.h>
int isprime(int num1)
{ for(int j=2;j<=sqrt(num1);j++)
     if(num1%j==0)
      return 0;
  return 1;
}
void main()
{ int a,b;
  printf("Enter Range ");
  scanf("%d %d",&a,&b );
  for(int i=a;i<=b;i++)
  {
    if(isprime(i))
    printf("%d \n",i );
  }
}
