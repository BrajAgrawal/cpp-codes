#include<stdio.h>
#include<conio.h>
int main()
{int n;
  printf("Enter size of array:  ");
  scanf("%d",&n);
  int array[n];
  printf("\nEnter the array:  ");
  for(int i=0;i<n;i++)
  scanf("%d",&array[i]);
  for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
         if(array[i]>array[j])
           {int temp=array[i];
           array[i]=array[j];
           array[j]=temp;}
for(int i=0;i<n;i++)
 printf("%d  ",array[i] );



}
