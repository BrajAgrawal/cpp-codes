#include <stdio.h>
#include <conio.h>
void main()
{ int l=0;
  for(int i =1;i<=50;i++)
  {int j=0 ;
    for(int k=1;k<=i;k++)
    { if(i%k==0)
      j++;  }
    if(j==2)
    {printf("%d \n ",i );
      l++;  }
}
 printf("Total Prime Numbers = %d",l );
}
