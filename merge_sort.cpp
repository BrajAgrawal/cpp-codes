#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[],int s,int e)
{
    int mid = (s+e)/2;

    int arr_left_length = mid-s+1;
    int arr_right_length = e-mid;

    int * arr_left = new int[arr_left_length];
    int * arr_right = new int[arr_right_length];

    int mainArrayindex=s;

    for(int i=0;i<arr_left_length;i++) arr_left[i]=arr[mainArrayindex++];
    for(int i=0;i<arr_right_length;i++) arr_right[i]=arr[mainArrayindex++];
   
    int left_index=0,right_index=0;
    mainArrayindex=s;
    
    while(left_index <arr_left_length && right_index<arr_right_length)
    {
        if(arr_left[left_index]<=arr_right[right_index])
        arr[mainArrayindex++] = arr_left[left_index++];
        else
        arr[mainArrayindex++] = arr_right[right_index++];
        
    }
    while(left_index <arr_left_length) arr[mainArrayindex++] = arr_left[left_index++];
    while(right_index <arr_right_length) arr[mainArrayindex++] = arr_right[right_index++];
    
}

void merge_sort(int arr[], int s, int e)
{ 
     if(s==e) return;

    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);
   
}
int main()
{
    int n = 10;
    int n1 = 1;

    int arr[n] = {11, 5, 2, 16, 4, 4, 19, 7, 8, 12};
    int arr1[n1] = {4};

    merge_sort(arr, 0, n - 1);
    printarray(arr, n);

    merge_sort(arr1, 0, n1- 1);    
    printarray(arr1, n1);
    return 0;
}