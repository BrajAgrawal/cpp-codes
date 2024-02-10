#include<stdio.h>
#include<conio.h>
int binarysearch(int array[],int n,int key)
{int start=0,end=n-1;
  while(start<=end)
  {int mid=(start+end)/2;
    if(array[mid]==key)
      return mid;
    else if(key>mid)
    start=mid+1;
    else
    end=mid-1;
  }
  return -1;

}
int main()
{int n,key;
  printf("Enter size of array:  ");
  scanf("%d",&n);
  int array[n];
  printf("\nEnter the array:  ");
  for(int i=0;i<n;i++)
  scanf("%d",&array[i]);
  printf("\nEnter Element to be searched:   ");
  scanf("%d",&key);
  printf("\nAnswer = %d",binarysearch(array,n,key) );
  }
