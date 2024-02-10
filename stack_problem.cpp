#include <iostream>
using namespace std;
#include<stack>
#include<vector>




 vector<int> next(vector<int>& heights,int n)
    {  
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i=n-1 ; i>=0 ; i--)
        {
            while(s.top() >= 0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;

    }
    vector<int> prev(vector<int>& heights,int n)
    {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i=0 ; i<n ; i++)
        {
            while(s.top() >= 0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nextSmallerIndex(n);
        vector<int> previousSmallerIndex(n);

        nextSmallerIndex = next(heights,n);
        previousSmallerIndex = prev(heights,n);

        

        int ans =0;
        
        for(int i=0;i<n-1;i++)
        {   
            int l = heights[i];

            cout<<nextSmallerIndex[i]<<"  "<<previousSmallerIndex[i]<<endl;

            if(nextSmallerIndex[i] == -1) nextSmallerIndex[i] = n;

            cout<<nextSmallerIndex[i]<<"  "<<previousSmallerIndex[i]<<endl;

            int b = nextSmallerIndex[i] - previousSmallerIndex[i] - 1;

            ans = max(ans , (l*b));
        }
        return ans;
    }

    int main()
    {   
        vector<int> heights(2);
        heights[0] =1;
        heights[1] =1;
        cout<<largestRectangleArea(heights)<<endl;


        return 0;
    }