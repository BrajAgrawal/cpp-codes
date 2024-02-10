#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{ int num,rev=0,rem=0;
  printf("Enter a Number  ");
   scanf("%d",&num );
for(int i=num;i>0;i=i/10)
{
  rem = i%10;
  rev = (rev*10)+rem;
}

printf("Reverse is %d",rev);


}
