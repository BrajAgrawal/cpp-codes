#include <iostream>
using namespace std;



void printarray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }


    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);


    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
       if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}



void Quick_sort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    Quick_sort(arr, s, p - 1);
    Quick_sort(arr, p + 1, e);
}

int main()
{
    int n = 6;
    int arr[n] = {0,1,2,3,4,5};
    Quick_sort(arr, 0, n - 1);
    printarray(arr, n);
    return 0;
}