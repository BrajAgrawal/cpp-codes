#include<iostream>
using namespace std ;
int fibonacci(int n)
{if(n==0||n==1)
return 1;
return fibonacci(n-1)+fibonacci(n-2);

}

int main()
{int a;
  cout<<"enter a number"<<endl;
  cin>>a;
  if(a>0)
  cout<<"the fibonacci sum  "<<fibonacci(a);
  else cout<<"invalid";
return 0;
}