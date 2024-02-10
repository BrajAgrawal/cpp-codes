#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int res = 1;
    while (b > 0)
    {
        
        if (b % 2 == 1)
            res = res * a;
        a = a * a;
        b = b / 2;
        cout << "run" << endl;
    }
    cout << res;
    return 0;
}