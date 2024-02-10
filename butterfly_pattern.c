#include <stdio.h>
#include <conio.h>
void main()
{//int col,k=1;
//  scanf("%d",&col);
  for(int i=1;i<=4;i++)
  {
  for(int j =1;j<=8;j++)
  if(j<=i||j>8-i)
  printf("*");
  else
  printf(" ");
 printf("\n");
  }
  for(int i=4;i>=1;i--)
  {
  for(int j =1;j<=8;j++)
  if(j<=i||j>8-i)
  printf("*");
  else
  printf(" ");
 printf("\n");
  }

  }
