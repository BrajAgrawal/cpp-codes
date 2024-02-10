#include<iostream>
using namespace std ;
int fac(int n)
{
    if(n==0 || n==1)
    return 1;
    return n*fac(n-1);
}

int main()
{int a;
  cout<<"enter a number"<<endl;
  cin>>a;
  if(a>0)
  cout<<"factorial of "<<a<<" is "<<fac(a);
   else cout<<"invalid";
return 0;
}