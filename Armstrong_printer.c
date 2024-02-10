#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{ int num,rev=0,rem=0;
  printf("Enter a Number  ");
   scanf("%d",&num );
for(int i=1;i<=num;i++)
{int num2=0;
for(int j=i;j>0;j=j/10)
{
  rem = j%10;
  num2+=rem*rem*rem;
}
if(i==num2)
printf("%d\n",i);
}

}
