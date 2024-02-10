#include <iostream>
#include <stack>
using namespace std;

int main()
{

 stack<int> s1;

 s1.push(2);

 s1.push(3);
 cout<<"Top element is :  "<<s1.top()<<endl;

 s1.pop();
 s1.pop();
 //cout<<"Top element is :  "<<s1.top()<<endl;

 cout<<"Size of stack is :  "<<s1.size()<<endl;

 cout<<"Empty stack  :  "<<s1.empty()<<endl;

 s1.push(4);
 s1.push(5);
 s1.push(6);

 stack<int> s2(s1);

 while(s2.empty() == false)
 {
    cout<<s2.top()<<endl;
    s2.pop();
 }
 

 

return 0;
}