#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selection_sort(int arr[], int n)
{   if(n==1 || n==0) return;

    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[min_index])
            min_index = i;
    }
    swap(arr[0], arr[min_index]);
    
    selection_sort(arr + 1, n - 1);
}
int main()
{
    int n = 10;
    int arr[n] = {1, 5, 2, 16, 3, 4, 9, 7, 8, 2};
    selection_sort(arr, n);
    printarray(arr, n);
    return 0;
}