#include<iostream>
using namespace std ;
void print(int array[],int n)
{
    for(int i=0;i<n;i++) cout<<array[i]<<"  ";
    cout<<endl;
}

int main()
{ int n=9;
  int arr[n]={9,8,7,0,0,3,0,1,2};
  int i=0,j=0;
  while(i<n)
  {
   if(arr[i]!=0){swap(arr[i],arr[j]); j++;}
   i++;
  }
  print(arr,n);
return 0;
}