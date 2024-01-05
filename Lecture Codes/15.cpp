#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int StudentCount = 0;
    int PageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (PageSum + arr[i] <= mid)
        {
            PageSum += arr[i];
        }
        else
        {
            StudentCount++;
            if (StudentCount > m || arr[i] > mid)
            {
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}