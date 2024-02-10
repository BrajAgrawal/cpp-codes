#include<stdio.h>
#include<conio.h>
int main()
{
  int s,n,i=0,j,k=0;
  printf("Enter the size of array:     ");
  scanf("%d",&n );
  printf("Enter Required Sum   ");
  scanf("%d",&s );
  int arr[n];
  printf("Enter the elements of array respectively   ");
  for(int l=0;l<n;l++)
  scanf("%d",&arr[l] );
  for(;i<n;i++)
  { int sum=0;
    for(j=i;j<n;j++)
       {sum+=arr[j];
        if(sum==s)
        {k++;
        break;}
        else if(sum>s)
        break;
        }
      if(k==1)break;
  }
  if (k==1) {
  printf("Subarrays Starting From %d to %d sums upto %d\n",i+1,j+1,s );
  }
}
