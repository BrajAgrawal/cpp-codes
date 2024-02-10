#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort01(int array[], int n)
{
  int left = 0, right = n - 1;
  while (left < right)
  {
    while (array[left] == 0)
      left++;
    while (array[right] == 1)
      right--;
    if (left < right)
    {
      swap(array[left], array[right]);
      left++;
      right--;
    }
  }
}
void printarray(int array[], int n)
{
  cout << "Array is:  ";
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << "  ";
  }
}

int main()
{
  int arr[8] = {1, 1, 0, 1, 0, 0, 0, 0};
  sort01(arr, 8);
  printarray(arr, 8);

  return 0;
}