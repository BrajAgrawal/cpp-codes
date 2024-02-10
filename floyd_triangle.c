#include <stdio.h>
#include <conio.h>
void main()
{int col,k=1;
  scanf("%d",&col);
  for(int i=1;i<=col;i++)
  {
  for(int j =1;j<=i;j++)
  printf("%d  ",k++);

       printf("\n");
  }

  }
