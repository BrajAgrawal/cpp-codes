#include<stdio.h>
#include <conio.h>
void main()
{ int num;
  scanf("%d",&num );
for(int i=1;i<=num;i++)
    {
      for(int j=1;j<=num-i+1;j++)
      printf("%d",j);
      printf("\n");
    }
}
