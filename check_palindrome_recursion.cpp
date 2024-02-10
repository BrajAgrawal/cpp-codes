#include <iostream>
using namespace std;
bool check_pallindrome(string s, int i = 0)
{
    int j = s.length() - 1 - i;
    if(i>j) return true;
    if (s[i] != s[j])
        return false;
    i++;
    return (check_pallindrome(s, i));
}
int main()
{
    string s = "erarrare";
    cout << check_pallindrome(s) << endl;
    return 0;
}