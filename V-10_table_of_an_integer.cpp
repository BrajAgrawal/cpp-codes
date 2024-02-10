#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num;
    cout<<"Enter the integer whose table is required :  ";
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
      cout<<num<<" * "<<setw(2)<<i<<" = "<<(num*i)<<endl;
    }
    
    return 0;
}