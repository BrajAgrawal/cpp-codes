// #include <iostream>
// using namespace std;
// int main()
// {


// // array

// int a[] = {1,2,3,4};
// int *p = a;
// cout<<a<<endl;
// cout<<*p<<endl;


// return 0;


// }
#include<iostream>
 using namespace std;
 void swap (char *x, char *y)
 {
   char *t = x;
   x = y;
  y = t;
 }
 int main()
 {
    char *x = "ninjasquiz";
    char *y = "codingninjas";
    char *t;
    swap(x, y);
    cout<<x << " "<<y<<"  "; 
    t = x;
    x = y;
   y = t;
     cout<<x << " "<<y; 
    return 0;
 }