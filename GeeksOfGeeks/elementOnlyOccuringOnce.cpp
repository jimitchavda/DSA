/*
This is a practice problem from geeksforgeeks daily question,
You are given an array of n elements where all elements occur thrice except one,
if it is present it shall return that value or return -1
*/

#include <iostream>

using namespace std;

// This will check the number of occurence of each element

int isPresent(int arr[], int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count = count + 1;
        }
    }
    return count;
}

// This will check the number of occurence of each item, if it's one it will return it or will give -1 
int onlyOccurOnce(int arr[], int n)
{

    int ans;
    for (int i = 0; i < n; i++)
    {
        if (isPresent(arr, n, arr[i]) == 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    cout << isPresent(arr, 7, 3) << endl;
    cout << onlyOccurOnce(arr, 7) << endl;
}

