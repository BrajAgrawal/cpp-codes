#include <iostream>
#include <stack>
using namespace std;

class SpecialStack {
    public:

    int mini ;
    stack<int> s ;
        
    void push(int data) {
        if(s.empty())
        {
            s.push(data);
            mini = data;
           
        }

        else if(data < mini)
        {   
            s.push(2*data - mini);
            mini = data;
        }

        else
        {
            s.push(data);
        }
    }

    void pop() {
        
        if(s.empty()) 
        return;
        int curr = s.top();
        s.pop();
        
        if(!s.empty() && curr < mini)
        {
            mini = 2 * mini - curr; 
            cout<<"FF"<<endl;  
        }
        
    }

    int top() {

        if(mini < s.top())
        {
              return s.top();
        }
        else
        {
           return mini;
        }

    }

    int getMin() {
        return mini;
    } 

    bool empty()
    {
        if(s.empty()) return 1;
        return 0;
    } 
};

int main()
{
    SpecialStack s;
    s.push(45);
    s.pop();
    cout<<"empty =  "<<s.empty()<<endl;
    s.push(53);
    cout<<s.getMin()<<endl;
}