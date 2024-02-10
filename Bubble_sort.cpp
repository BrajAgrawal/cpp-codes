#include <iostream>
using namespace std;
void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i]<<"  ";
}
void bubblesort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (array[j + 1] < array[j])
                swap(array[j], array[j + 1]);
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {24, 16, 12, 15, 30,45};
    bubblesort(arr, n);
    printarray(arr, n);

    return 0;
}