#include<iostream>
using namespace std ;
void printarray(int array[],int n)
{
    for(int i=0;i<n;i++) cout<<array[i]<<"  ";
    cout<<endl;
}
int main()
{ int n1=5,n2=3;
  int arr1[n1]={1,2,3,4,5},arr2[n2]={9,5,6};
  int n=max(n1,n2)+1;

  int ans[n]={0};
  int carry=0,temp;
  for(int i=n-1,j=n1-1,k=n2-1;i>=0;i--,j--,k--)
  {
   if(j>=0&&k>=0) temp = arr1[j]+arr2[k]+carry;
 else if(j>=0) temp = arr1[j]+carry;
  else if(k>=0) temp = arr1[k]+carry;
  else temp =carry;
   carry = temp/10;
   ans[i]=temp%10;
  }
  printarray(ans,n);
return 0;
}