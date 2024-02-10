#include <iostream>
#include <iomanip>
using namespace std;
double fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cout << fib(i) << "  ";
    }
    cout << endl;

    // Golden Ratio

    for (int i = 2; i <= n; i++)
    {

        cout << (fib(i + 1) / fib(i)) << "  ";
    }

    return 0;
}