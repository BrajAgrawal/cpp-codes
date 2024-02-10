#include<stdio.h>
#include <conio.h>
void main()
{ int row;
  scanf("%d",&row );
for(int i=1;i<=row;i++)
    {
      for(int j=1;j<=i;j++)
      {if((i+j)%2==0)
          printf("1");
       else
       printf("0");
      }

      printf("\n");
    }
}
