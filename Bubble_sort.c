#include<stdio.h>
#include<conio.h>
int main()
{int n,l=1;
  printf("Enter size of array:  ");
  scanf("%d",&n);
  int array[n];
  printf("\nEnter the array:  ");
  for(int i=0;i<n;i++)
  scanf("%d",&array[i]);
do {
  for(int i=0;i<n-l;i++)
  if(array[i+1]<array[i])
    {int temp=array[i];
      array[i]=array[i+1];
    array[i+1]=temp;}
     l++;
   } while(l<n);

  for(int i=0;i<n;i++)
   printf("%d  ",array[i] );


}
