#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{int r1,c1,r2,c2,n;
  printf("Enter no. of rows and coloums in 1st matrix");
  scanf("%d %d",&r1,&c1);
  printf("Enter no. of rows and coloums in 2nd matrix");
  scanf("%d %d",&r2,&c2);
  int a[r1][c1],b[r2][c2],c[r1][c2];
    printf("Enter 1st matrix");
    for(int i=0;i<r1;i++)
  { for(int j=0;j<c1;j++)
    scanf("%d",&a[i][j] );
  }
  printf("Enter 2nd matrix");
  for(int i=0;i<r2;i++)
{ for(int j=0;j<c2;j++)
  scanf("%d",&b[i][j] );
}
 printf("Enter 1 to add the matrices and 2 to multiply them");
 scanf("%d",&n);
if(n==1 && r1==r2 && c1==c2)
{   for(int i=0;i<r1;i++)
   {for(int j=0;j<c1;j++)
    c[i][j] = a[i][j]+b[i][j];
   }
}
 if(n==2 && c1==r2)
{   for(int i=0;i<r1;i++)
   {for(int j=0;j<c2;j++)
       { c[i][j] = 0 ;
         for(int k=0;k<c1;k++)
           c[i][j] +=  a[i][k]*b[k][j];
       }
   }
}
for(int i=0;i<r1;i++)
{ for(int j=0;j<c2;j++)
printf("%d\t",c[i][j] );
printf("\n");
}

getch();
}
