#include <iostream>
using namespace std;
bool ispossible(int array[], int size, int student, int sum)
{
    int studentcount = 1;
    int pagecount = 0;
    for (int i = 0; i < size; i++)
    {
        if (pagecount + array[i] <= sum)
            pagecount += array[i];
        else
        {
               studentcount++;
            if (studentcount > student || array[i] > sum)
                return 0;
                pagecount=array[i];
        }
        
        //cout<<"for loop"<<endl;
    }
    return 1;
}
int Bookallocation(int array[], int size, int student, int sum)
{
    int s = 0, e = sum, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {   
        if (ispossible(array, size, student, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
       // cout<<"while loop"<<endl;
    }
    return ans;
}

int main()
{
    int n = 5, m = 2, sum = 0;

    int arr[n] = {25,17,20,10,10};
    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Minimum of maximum No. of Books = " << endl<<Bookallocation(arr, n, m, sum) << endl;

    return 0;
}