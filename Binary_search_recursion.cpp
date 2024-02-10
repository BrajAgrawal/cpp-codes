#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Binary_search(int arr[], int e, int k, int s = 0)
{
    print(arr, s, e);
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return mid;
    if (k > arr[mid])
        return (Binary_search(arr, e, k, mid + 1));
    if (k < arr[mid])
        return (Binary_search(arr, mid - 1, k, s));
}
int main()
{
    int n = 5;
    int arr[n] = {1, 4, 7, 13, 15};
    int key = 7;
    cout << Binary_search(arr, n - 1, key) << "  =  Index " << endl;
    return 0;
}