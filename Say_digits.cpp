#include <iostream>
using namespace std;
string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void saydigit(int n)
{

    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;

    saydigit(n);

    cout << arr[digit] << "  ";
}
int main()
{
    int n;
    cin >> n;

    cout << endl;
    saydigit(n);
    cout << endl;
    return 0;
}