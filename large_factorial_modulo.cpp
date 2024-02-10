#include <iostream>
#include <cmath>
using namespace std;
int main()
{int a=212, m= pow(10,9)+7;
int ans=1;
for(int i=a;i>0;i--)
{
 ans = (ans * a %m)%m;
}
cout<<ans<<endl;
return 0;
}