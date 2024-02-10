#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{ if(n == 0)  return -1;
  if(*arr == key) return n;
  return(linear_search(arr+1,n-1,key));

}
int main()
{ int n=5;
// cin>>n;
int arr[5] ={1,5,9,2,16};
int key = 0;
int posi = n-linear_search(arr,n,key);
cout<<"Position = "<<posi<<endl;

return 0;
}