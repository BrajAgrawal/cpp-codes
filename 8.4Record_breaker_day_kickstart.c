#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int n,k=0,mx=-1;
  printf("Enter the Number of Days    ");
  scanf("%d",&n);
  int visitors[n+1];
  visitors[n]=-1;
  printf("Enter the Number of visitors respectively   " );
  for(int i=0;i<n;i++)
  scanf("%d",&visitors[i] );

  for(int i=0;i<+n;i++)
     {if(visitors[i]>mx&&visitors[i]>visitors[i+1])
         {printf("Day %d was a record breaking day \n",i+1 );
          k++;}
        mx= fmax(mx,visitors[i]);
    }
   printf("Total Record Breaking Days = %d\n",k );
}
