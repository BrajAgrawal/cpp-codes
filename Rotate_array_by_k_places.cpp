#include<iostream>
using namespace std ;
void printarray(int array[],int n)
{
    for(int i=0;i<n;i++) cout<<array[i]<<"  ";
    cout<<endl;
}

int main()
{
  int n=10,k=4;
  int arr[n]={1,2,4,5,6,7,8,9,10,11},temp[10];
  for(int i=0;i<n;i++)
  { temp[(i+k)%n]=arr[i];}
  for (int i = 0; i < n; i++)
  {
    arr[i]=temp[i];
  }
  
 printarray(arr,n);
return 0;
}