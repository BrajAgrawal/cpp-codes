#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left<=n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if(right<=n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
    else  return;

}
void heap_sort(int arr[],int n)
{   
    

    while(n>1)
    {
    swap(arr[n],arr[1]);
    n--;
    heapify(arr,n,1);
    }
}
int main()
{   
    int n = 5;
    int arr[n+1] = {-1,76,36,70,35,21};
    heap_sort(arr,n);

    for (int i = 1; i <= n; i++)
    {
       cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
return 0;
}