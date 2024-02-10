#include <iostream>
using namespace std;
int Pivot(int array[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (array[mid] > array[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return mid;
}
int binarysearch(int array[], int first, int last, int key)
{
    int s = first, e = last;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (array[mid] == key)
            return mid;
        else if (array[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
            mid = s + (e - s) / 2;
       
    }
    return -1;
}
int main()
{
    int arr[10] = {12, 13, 14, 15, 16, 7, 8, 9, 10, 11};
    int key = 12, first, last;
    int pivot = Pivot(arr, 10);
    cout << "Pivot element is :" << pivot << endl;
    if (key > arr[pivot] && key < arr[9])
    {
        first = pivot, last = 9;
    }
    else
    {
        first = 0, last = pivot - 1;
    }
    int index = binarysearch(arr, first, last, key);
    cout<<"The key is at "<<index<<endl;
    return 0;
}