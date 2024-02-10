#include<stdio.h>
#include <conio.h>
void main()
{ int side;
  scanf("%d",&side);
for(int i=1;i<=side;i++)
    {
      for(int j=1;j<=side-i;j++)
      printf(" ");
      for(int j=1;j<=side;j++)
      printf("* ");
      printf("\n");
    }
}
