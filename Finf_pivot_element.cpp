#include <iostream>
using namespace std;
int pivot(int array[], int size)
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

int main()
{
    int arr[10] = {12, 13, 14, 15, 16, 7, 8, 9, 10, 11};
    cout << "Pivot element is :" << pivot(arr, 10) << endl;
    return 0;
}