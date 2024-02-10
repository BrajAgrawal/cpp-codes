#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> solve(int arr[], int n, int k)
{
   deque<int> maxi(k),mini(k);
   vector<int> ans;
   
   for (int i = 0; i < k; i++)
   {
    while(!maxi.empty() && arr[maxi.back()] <= arr[i])
    maxi.pop_back();

    while(!mini.empty() && arr[mini.back()] >= arr[i])
    mini.pop_back();

    maxi.push_back(i);
    mini.push_back(i);                                                ////////////addition
   }

   ans.push_back(arr[mini.front()] + arr[maxi.front()]);
   

   for(int i=k;i<n;i++)
   {
    while(!maxi.empty() && arr[maxi.back()] <= arr[i])
    maxi.pop_back();

    while(!mini.empty() && arr[mini.back()] >= arr[i])
    mini.pop_back();

    maxi.push_back(i);
    mini.push_back(i);                                              ////////////addition

    if(!maxi.empty() && i - maxi.front() >=k)
    maxi.pop_front();

    if(!mini.empty() && i - mini.front() >=k)
    mini.pop_front();                                                ///////////removal 
    
    ans.push_back(arr[maxi.front()] + arr[mini.front()]);

   }




   return ans;
}

int main()
{
  int n=7,k=4;
  int arr [n] = {-2,5,-1,7,-3,-1,-5};
  
  vector<int> ans = solve(arr,n,k);
  int sum =0;
  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
    sum+=ans[i];
  }
  cout<<endl<<"Sum =  "<<sum<<endl;
  
  
  

return 0;
}