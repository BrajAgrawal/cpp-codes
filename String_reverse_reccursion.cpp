#include <iostream>
using namespace std;

void reverse(string &s, int i)
{   int j = s.length()-1-i;
    if (i > j)
        return;
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i);
    return;
}
int main()
{
    string s = "abcde";
    reverse(s, 0);
    cout << s;
    return 0;
}