#include <iostream>
using namespace std;
int sqrtt(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2, ans;
    while (s <= e)
    {
        if (mid * mid == n)
            return mid;
        else if (mid * mid > n)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
       // cout<<"loop"<<endl;
    }
    return ans;
}

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << "square root is :" << sqrtt(n) << endl;
    }
    return 0;
}