#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int stalls[], int n, int totalcows, int mid)
{
    int cowcount = 1, lastpos = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount == totalcows)
                return true;
            lastpos = stalls[i];
        }
    }
    return false;
}
int Maxdist(int stalls[], int n, int totalcows)
{
    int s = 0, e = stalls[n], ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stalls, n, totalcows, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 5, totalcows = 3;
    int stalls[n] = {4, 2, 1, 3, 6};
    sort(stalls, stalls + n);
    cout << "Maximum distance between cows is:" << Maxdist(stalls, n, totalcows);

    return 0;
}