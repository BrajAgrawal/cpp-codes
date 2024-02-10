#include<stdio.h>
#include<conio.h>
void main()
{int row,col;
  printf("Enter No. Of Rows");
  scanf("%d",&row );
  printf("Enter No. Of Columns");
  scanf("%d",&col );
  for(int i=1;i<=row;i++)
      {for(int j=1;j<=col;j++)
        if(i==1||i==row)
        printf("*" );

        else if(j==1||j==col)
              printf("*" );
        else
          printf(" " );
          printf("\n");
      }
}
