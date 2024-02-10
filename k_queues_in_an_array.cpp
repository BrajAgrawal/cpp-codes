#include <iostream>
using namespace std;

class kqueues
{
private:
    int* arr;
    int* front;
    int* rear;
    int* next;
    int freespot;
    int size;
public:

kqueues(int n,int k)
{
    this->size = n;
    arr = new int[n];
    front = new int[k];
    rear = new int[k];
    next = new int[n];

    fill(front,front+k,-1);
    fill(rear,rear+k,-1);

    for (int i = 0; i < n-1; i++)
    {
        next[i] = i+1;
    }

    next[n-1] = -1;

    freespot =0;
}

bool push(int data,int m)
{
   if(freespot == -1) return false;

   int index = freespot;
    freespot = next[index];
    arr[index] = data;

   if(front[m-1] == -1)
   {
    
    front[m-1] = index;
    
   }
   else
   {
    next[rear[m-1]] = index;
   }
   
   next[index] = -1;         //
   rear[m-1] = index;
   return true;
}

int pop(int m)
{
    if(front[m-1] == -1) return -1;
    
    int data = arr[front[m-1]];
    int curr_front = front[m-1];

   
    front[m-1] = next[curr_front];    
    
     next[curr_front] = freespot;
        freespot = curr_front;
    return data;
}
    
};



int main()
{
    kqueues q1(15, 3);
    cout<<q1.push(5,1)<<"    True or false"<<endl;
    cout<<q1.pop(1)<<endl;
    cout<<q1.pop(1)<<endl;
    
    cout<<q1.push(6,1)<<"    True or false"<<endl;
    cout<<q1.push(7,1)<<"    True or false"<<endl;
    cout<<q1.push(8,1)<<"    True or false"<<endl;
    cout<<q1.pop(1)<<endl;
    cout<<q1.pop(1)<<endl;
    cout<<q1.pop(1)<<endl;
    cout<<q1.pop(1)<<endl;
    cout<<q1.pop(1)<<endl;

    cout<<q1.push(11,2)<<"    True or false"<<endl;
    cout<<q1.push(10,2)<<"    True or false"<<endl;
    cout<<q1.push(9,2)<<"    True or false"<<endl;
    cout<<q1.pop(2)<<endl;
    cout<<q1.pop(2)<<endl;
    cout<<q1.pop(2)<<endl;
    cout<<q1.pop(2)<<endl;
    cout<<q1.pop(2)<<endl;
return 0;
}