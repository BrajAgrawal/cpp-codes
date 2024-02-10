#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printarray(int array[], int n)
{
  cout << "Array is:  ";
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << "  ";
  }
  cout<<endl;
}
void sort012(int array[], int n)
{
  int left = 0,mid=0, right = n - 1;
 while(mid<=right)
 {
  if(array[mid] == 0)
  {
     swap(array[left++],array[mid++]);
  }
  else if(array[mid] == 1)
  {
    mid++;
  }
  else if(array[mid] == 2)
  {
    swap(array[right--],array[mid]);
  }

  printarray(array, 8);

  cout<<left<<" - "<<mid<<" - "<<right<<endl;
 }
 cout<<left<<" - "<<mid<<" - "<<right<<endl;
}


int main()
{
  int arr[8] = {1, 2, 0, 1, 0, 2, 0, 1};
  sort012(arr, 8);
  printarray(arr, 8);

  return 0;
}