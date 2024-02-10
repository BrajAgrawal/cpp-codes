#include<iostream>
using namespace std ;

int main()
{
  int fact,m,res=1;
  cin>>fact>>m;
  for(int i=1;i<=fact;i++)
  {// cout<<res;
    res = res*(i%m)%m;
    
  }
  cout<<res<<endl;
return 0;
}