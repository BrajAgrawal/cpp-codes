#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubble_sort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubble_sort(arr, n - 1);
}
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {11, 5, 2, 16, 3, 4, 19, 7, 8, 20};
    bubble_sort(arr, n);
    printarray(arr, n);

    return 0;
}