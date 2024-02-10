#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{ int num;
  printf("Enter a Number  ");
   scanf("%d",&num );
   if (num==1)
   {
printf("Neither Prime Nor Composite");
   }
   else
   {
   int j=0;
  for(int i=2;i<sqrt(num);i++)
  {
    if(num%i==0)
     j++;
  }
  if(j==0)
  printf("Prime Number");
  else
  printf("Composite Number");
    }
  getch();

}
