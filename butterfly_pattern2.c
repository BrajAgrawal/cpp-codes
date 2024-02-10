#include <stdio.h>
#include <conio.h>
void main()
{int col,k=1;
  scanf("%d",&col);
  for(int i=1;i<=col;i++)
  {
  for(int j =1;j<=(2*col);j++)
  if(j<=i||j>(2*col)-i)
  printf("*");
  else
  printf(" ");
 printf("\n");
  }
  for(int i=col;i>=1;i--)
  {
  for(int j =1;j<=(2*col);j++)
  if(j<=i||j>(2*col)-i)
  printf("*");
  else
  printf(" ");
 printf("\n");
  }

  }
