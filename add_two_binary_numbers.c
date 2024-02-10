#include<stdio.h>
#include<conio.h>
#include<math.h>
int binarytodecimal(int n)
{int sum=0;
  for(int i=n,k=0;i>0;i=i/10,k++)
  {int rem=i%10;
    sum+=rem*pow(2,k);}
  return sum;
}
int decimaltobinary(int num)
{int i,sum=0,lastdigit=0;
  for( i=1;i<=num;i*=2);
  i=i/2;
  for(;i>0;i/=2)
  {lastdigit=num/i;
    num=num-(lastdigit*i);
    sum=(sum*10)+lastdigit;
  }
  return sum;
}

int main()
{int b1,b2;
  printf("Enter two binary numbers:   ");
  scanf("%d %d",&b1,&b2 );
int sum = decimaltobinary(binarytodecimal(b1)+binarytodecimal(b2));
printf("Answer = %d\n",sum );
}
