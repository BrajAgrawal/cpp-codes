#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
int exist(string s1, string s2)
{   sort(s2.begin(),s2.end());
    for(int i=0;i<s1.length();i++)
    { string temp = s1.substr(i,s2.length());
     sort(temp.begin(),temp.end());
     if(s2.compare(temp) == 0) return 1;

    }
    return 0;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    exist(s1,s2);
    cout << exist(s1, s2) << endl;
   // cout << s1 << " " << s2 << endl;

    return 0;
}