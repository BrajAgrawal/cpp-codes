#include<iostream>
using namespace std ;

int main()
{
  int i=1;
  // for (int i = 0; i < 40; i++)
  // {
  //   if((i%2)==0)
  // continue;
  //     cout<<i<<endl;
  // }
  while (i<=40)
  {
    cout<<"A"<<endl;
    if(i==2)
    continue;
    cout<<i<<endl;
    i++;
  }
  
  
  
return 0;
}