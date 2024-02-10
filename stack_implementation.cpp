#include <iostream>
using namespace std;

class stack
{

public:
int* arr;
int length;
int top;

stack(int length)
{
    this->length = length;
    arr = new int[length];
    top= -1;
}

void push( int data)
{
    if(length-top >1)
    {
        top++;
        arr[top] = data;
    }
    else
    {
        cout<<"Stack overflow "<<endl;
    }
}
bool Isempty()
{
    if(top >= 0)
    return 0;
    else 
    return 1;

}
void pop()
{ 
    if(this->Isempty() == true)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
       top--;
    }
    
}

int top_element()
{   
    if(this->Isempty() == false)
    return arr[top];
    else return -1;
}

int size()
{
    return (top+1);
}

};

int main()
{

    stack s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);

    cout<<s.top_element()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout<<s.top_element()<<endl;

    s.push(5);
    s.push(6);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);

    cout<<s.top_element()<<endl;


    

return 0;
}