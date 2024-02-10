#include <stdio.h>
#include <conio.h>
void main()
{int col;
  scanf("%d",&col);
  for(int i=1;i<=col;i++)
  {
  for(int j =col+1-i;j>0;j--)
  printf("*");

       printf("\n");
  }

  }
