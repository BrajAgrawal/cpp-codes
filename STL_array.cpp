#include<iostream>
#include<array>
using namespace std ;

int main()
{
 int a[4] ={7,8,16,24};
 array<int,4> arr ={ 24,60,75,100};

 for(int i=0;i<arr.size();i++)
 {
    cout<<arr.at(i)<<"  ";
 }
 cout<<endl;
 for(int i:arr)
{
    cout<<i<<" ";
    
}
 cout<<endl;
 cout<<"First element = "<<arr.front()<<" last element = "<<arr.back()<<endl;
 cout<<"Empty =  "<<arr.empty()<<endl;
 
return 0;
}