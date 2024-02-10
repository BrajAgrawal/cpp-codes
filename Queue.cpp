#include <iostream>
#include <queue>
using namespace std;
int main()
{
queue<int> q ;

q.push(2);  q.push(6); q.push(8); q.push(10);

q.pop();

cout<<"Front of queue is :  "<<q.front()<<endl;
cout<<"Back of queue is :  "<<q.back()<<endl;
cout<<"Size of queue is :  "<<q.size()<<endl;
cout<<"Is Stack empty :  "<<q.empty()<<endl;

queue <int> q2(q);

while(!q2.empty())
{
    cout<<q2.front()<<"   ";
    q2.pop();
}
cout<<endl;


return 0;
}