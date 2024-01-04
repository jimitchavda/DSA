#include <iostream>

using namespace std;

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max > arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {-10, 9, 3, 144, 5, 6, 7};
    cout << max(arr, 7) << endl;
    cout << min(arr, 7) << endl;
}