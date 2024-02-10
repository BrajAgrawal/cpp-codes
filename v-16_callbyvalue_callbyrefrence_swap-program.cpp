#include<iostream>
using namespace std ;
// void swap(int a,int b)  this will not swap num1 and num 2
// {
//     int temp = a;
//     a=b;
//     b=temp;
// }
// void swappointer(int* a,int* b)  this will swap num1 and num 2
// {
//     int tempo = *a;
//     *a=*b;
//     *b=tempo;
// }
void swapref(int &a,int &b)
{ int tempor =a;
   a=b;
   b=tempor;
}

int main()
{
  int num1,num2;
  cin>>num1>>num2;
   swapref(num1,num2); 
  cout<<"Value of num1 is "<<num1<<endl<<"Value of num2 is "<<num2;
return 0;
}