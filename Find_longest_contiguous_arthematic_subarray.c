#include<stdio.h>
#include<conio.h>
int main()
{int n,mx=0,mxpos=0;
  printf("Enter the size of array   " );
  scanf("%d",&n );
  int arr[n];
  printf("Enter the array  " );
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i] );
  for(int i=0;i<n-2;)
  {int k=2;
    for(int j=i;;j++)
       {if(arr[j+2]-arr[j+1]==arr[j+1]-arr[j])
             k++;
        else
          {i=j+1;
           break;}
       }
    if(k>mx)
    { mxpos=i-k+1;
      mx=k;}
  }
  printf("\n#Case%d:%d",mxpos,mx );
}
