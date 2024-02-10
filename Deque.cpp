#include <iostream>
#include <queue>
using namespace std;


int main()
{
deque <int> dq ;

dq.push_front(1); dq.push_front(2);  dq.push_back(6); dq.push_back(10);

dq.pop_front();
dq.pop_back();

cout<<"Front of queue is :  "<<dq.front()<<endl;
cout<<"Back of queue is :  "<<dq.back()<<endl;
cout<<"Size of queue is :  "<<dq.size()<<endl;
cout<<"Is Stack empty :  "<<dq.empty()<<endl;

queue <int> q2(dq);
deque <int> dq2(dq);

while(!q2.empty())
{
    cout<<q2.front()<<"   ";
    q2.pop();
}
cout<<endl;


return 0;
}