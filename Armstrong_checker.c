#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{ int num1,num2=0,rev=0,rem=0;
  printf("Enter a Number  ");
   scanf("%d",&num1 );
for(int i=num1;i>0;i=i/10)
{
  rem = i%10;
  num2+=rem*rem*rem;

}
if(num1==num2)
printf("Armstrong Number");
else
printf("Not Armstrong Number");
}
