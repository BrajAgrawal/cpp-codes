#include<iostream>
using namespace std ;
 string delete_duplicates(string s)
 {
    for(int i=0;i<s.length()-1;i++)
    {   cout<<i<<endl;
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i=-1;
            cout<<"ok"<<i<<endl;
        }
        cout<<s<<endl;
    }
   
    return s;
 }

int main()
{
  string s1;
  getline(cin,s1);
  s1 = delete_duplicates(s1);
  cout<<s1<<endl;

return 0;
}