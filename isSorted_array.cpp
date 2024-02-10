#include <iostream>
using namespace std;
bool isSorted(int arr[],int n,int i=0)
{ if(i==n) return 1;
 if(arr[i]>arr[i+1]) return 0;
 i++;
 return(isSorted(arr,n,i));

}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
      if(isSorted(arr,n))  cout<<"Yes"<<endl;
      else cout<<"No"<<endl;

    return 0;
}