#include<iostream>
using namespace std;
int main(){
    float fol = 23.4f;
    float Fol = 23.4F;
    long double ldo =23.4l;
    long double Ldo =23.4L;
    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The size of fol is : "<<sizeof(fol)<<endl; 
    cout<<"The size of Fol is : "<<sizeof(Fol)<<endl;
    cout<<"The size of ldo is : "<<sizeof(ldo)<<endl;
    cout<<"The size of Ldo is : "<<sizeof(Ldo)<<endl;
    return 0;
}