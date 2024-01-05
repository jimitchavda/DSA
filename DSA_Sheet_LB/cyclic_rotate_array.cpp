/*
Q7 from Array
Given an array, the task is to cyclically rotate the array clockwise by one time.

Examples:

Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}

Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}
*/

#include <iostream>
using namespace std;

// function to cyclic rotate an array

void cyclic_rotate(int arr[], int n)
{
    int k = arr[n - 1]; // storing the last element
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1]; // shifting each element forward
    }
    arr[0] = k; // finally storing the previous last element to first element
}

// function to print whole array
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cyclic_rotate(arr, n);
    print_array(arr, n);
}