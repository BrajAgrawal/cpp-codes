#include <iostream>
#include <unordered_map>
#include <map>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{   
   vector<int> arr = {2,12,2,11,-12 ,2, -1, 2, 2, 11, 12, 2, -6};
   map<int,int> frequency;

    for(int i = 0 ; i<arr.size();i++)
    {
        if(frequency.count(arr[i])) frequency[arr[i]] = frequency[arr[i]] + 1;
        else frequency[arr[i]] = 1;
    }
    
    int maxi = INT_MIN ;
    int number = 0 ;

    for(auto i : frequency)
    {  
       cout<<i.first<<"  -  "<<i.second<<endl;
       if(i.second > maxi) 
       {
           maxi = i.second;
           number = i.first;
       }
    }

   cout<<number<<endl;
return 0;
}