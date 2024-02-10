#include <iostream>
using namespace std;
void printarray(int array[],int n)
{
    for(int i=0;i<n;i++) cout<<array[i]<<"  ";
}
void selectionsort(int array[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int j = i; j < n; j++)
        {
            if (array[j] < array[minindex])
                minindex = j;
        }
        swap(array[i], array[minindex]);
    }
}

int main()
{ int n=6;
int arr[n] =  {1,8,6,24,9,18};
selectionsort(arr,n);
printarray(arr,n);

    return 0;
}