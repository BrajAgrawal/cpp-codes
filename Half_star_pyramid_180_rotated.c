#include <stdio.h>
#include <conio.h>
void main()
{int col;
  scanf("%d",&col);
  for(int i=1;i<=col;i++)
  {for(int j=1;j<=col-i;j++)
    printf(" ");
    for(int k=1;k<=i;k++)
      printf("*");

       printf("\n");
  }

  }
