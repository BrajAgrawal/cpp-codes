#include<iostream>
#include<vector>
using namespace std ;

int main()
{
  vector<int> v1(5,1) ;
  vector<int> v2(v1);
 v1.push_back(12); 
 v1[2] =33;  
 v1.pop_back(); 
 v1.pop_back(); 
  cout<<"capacity ="<<v1.capacity()<<endl;
  cout<<"Size ="<<v1.size()<<endl;
  cout<<"capacity ="<<v2.capacity()<<endl;
  for(int i:v1)
{
    cout<<i<<" ";
    
}
  cout<<endl;
 v1.clear();
  cout<<"capacity ="<<v1.capacity()<<endl;
  cout<<"Size ="<<v1.size()<<endl;
 v1.push_back(1222);
  for(int i=0;i< v1.size();i++)
  {
    cout<<v1[i]<<"  ";
  }
return 0;
}