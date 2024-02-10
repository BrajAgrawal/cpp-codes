#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while((n&1)==0){ n=n>>1; }
    
    if(n-1 ==0) cout<<"true";
    else cout<<"false";
    
    // if(n==1) cout<<"true";
    // else cout<<"false";


    // if(!(n&(n-1))) cout<<"true";
    // else cout<<"false";
    return 0;
}