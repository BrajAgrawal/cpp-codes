#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertion_sort(int arr[], int n, int i = 1)
{
    printarray(arr, n);
    if (i == n)
        return;
    int temp = arr[i];
    int j = i - 1;
    for ( ;j >= 0; j--)
    {
        if (temp < arr[j])
            arr[j + 1] = arr[j];
        else
        {
             
            break;
           
        }
        }
    arr[j+1] = temp;
    insertion_sort(arr, n, i + 1);
}
int main()
{
    int n = 10;
    int arr[n] = {11, 5, 2, 16, 3, 4, 9, 7, 8, 12};
    insertion_sort(arr, n);
    printarray(arr, n);
    return 0;
}