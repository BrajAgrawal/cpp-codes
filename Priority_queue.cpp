#include <iostream>
#include <queue>
using namespace std;
int main()
{
    cout<<"Max - Heap :"<<endl<<endl;

    priority_queue<int> pq;
    pq.push(2);
    pq.push(5);
    pq.push(9);

    cout<<"Size of pq is : "<<pq.size()<<endl;

    cout<<"Top = "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top = "<<pq.top()<<endl;
    
    if(pq.empty())
    cout<<"pq is empty"<<endl;
    else
    cout<<"pq is Not empty"<<endl;


    cout<<endl<<endl;

    cout<<"Min - Heap :"<<endl<<endl;

    priority_queue<int,vector<int>,greater<int>> min_pq;
    min_pq.push(12);
    min_pq.push(5);
    min_pq.push(9);

    cout<<"Size of pq is : "<<min_pq.size()<<endl;

    cout<<"Top = "<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<"Top = "<<min_pq.top()<<endl;
    
    if(min_pq.empty())
    cout<<"min_pq is empty"<<endl;
    else
    cout<<"min_pq is Not empty"<<endl;
    
    
return 0;
}