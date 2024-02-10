#include<iostream>
using namespace std ;
void reverse(string str,int s,int e)
{  
    for(int i=s;s<e;i++)
      { 
        swap(str[s++],str[e--]);
         }
         
}

int main()
{
  string str;
  str = "Mera naam Braj hai";
  int s=0,e,i;
  for( i=0;i<str.length();i++)
  { if(str[i] == ' ') 
  {   e=i-1;
     for(int i=s;s<e;i++)
      { 
        swap(str[s++],str[e--]);
         }
    s=i+1;
  }
  }
  e=i-1;
for(int i=s;s<e;i++)
      { 
        swap(str[s++],str[e--]);
         }
  cout<<str<<endl;
  
return 0;
}