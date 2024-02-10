#include<iostream>
using namespace std ;
int binarysearch(int array[],int size,int key)
{
    int start = 0,end = size-1;
    int mid = (start +end) /2;
     while(start<=end)
     {
        if(array[mid]==key)
        return mid;
        if(key>=array[mid]) start = mid +1;
        else end = mid -1;
        mid = (start + end) /2;
     }
     return -1;
}

int main()
{ int n=8,key=108;
  int arr1[8] ={1,12,22,35,49,60,75,108};
  
  cout<<"Index of binary search is :  "<<binarysearch(arr1,n,key);
return 0;
}