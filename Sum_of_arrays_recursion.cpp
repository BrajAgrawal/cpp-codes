#include <iostream>
using namespace std;
int sumArray(int arr[],int n)
{ if(n==0) return 0;
 int sum;
 sum = *arr + sumArray(arr+1, n-1); 
 return sum;
    
}
int main()
{ int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
cout<<sumArray(arr,n);
return 0;
}