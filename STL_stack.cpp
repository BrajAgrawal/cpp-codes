#include<iostream>
#include<stack>
using namespace std ;

int main()
{
  stack<int> st;
  st.push(99);
  st.push(919);
  stack<int>st2(st);
  st2.pop();
  //for(int i:st) cout<<i<<" "; //last in first out concept only
  cout<<endl;
  cout<<" top element = "<<st.top()<<endl;
  cout<<" top element = "<<st2.top()<<endl;
return 0;
}