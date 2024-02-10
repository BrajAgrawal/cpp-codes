#include <iostream>
using namespace std;
int main()
{
    char ch1[5];
    cin >> ch1;
    char ch2[] = "BRAJ";
    char ch3[5] = {'K','u','m','a','r'};
    char * ptr1 = &ch1[0];
    char * ptr2 = &ch2[0];
    char * ptr3 = &ch3[0];
    
    char ** ptr11 = &ptr1;
    char ** ptr22 = &ptr2;
    char ** ptr33 = &ptr3;


   // cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
   // cout<<*ptr11<<" "<<*ptr22<<" "<<*ptr33<<endl;

    cout<<ch1<<" "<<ch2<<" "<<ch3<<endl;

    return 0;
}