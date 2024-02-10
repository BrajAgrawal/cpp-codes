#include <iostream>
using namespace std;
int catalan(int n)
{
    int ans=0 ;
    if (n <= 1)
        return 1;
    for (int i = 0; i < n; i++)
    {
        ans += catalan(i) * catalan(n - i - 1);
    }
    return ans;
}
int main()
{

    for (int j = 0; j < 10; j++)
        cout << catalan(j) << " , ";
    cout << endl;
    return 0;
}