#include <iostream>
using namespace std;
void Insertionsort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < array[j])
                array[j + 1] = array[j];
            else
            {
                 
                break;
            }
        }
        array[j + 1] = temp;
       
    }
}
void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << "  ";
    cout << endl;
}
int main()
{
    int n = 8;
    int arr[n] = {5, 3, 24, 60, 15, 7, 1, 8};
    Insertionsort(arr, n);
    printarray(arr, n);
    return 0;
}