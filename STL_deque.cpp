#include<iostream>
#include<deque>
using namespace std ;

int main()
{ deque<int>d = {1,24};
d.push_back(60);
d.push_back(60);
d.push_front(0);
d.push_front(0);
d[0]=-1;
for(int i:d)
{
    cout<<i<<" ";
    
}
cout<<endl;
d.erase(d.begin(),d.begin()+2);
for(int i:d)
{
    cout<<i<<" ";
    
}
cout<<endl;

  
return 0;
}