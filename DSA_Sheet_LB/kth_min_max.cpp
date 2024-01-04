/*
Q3 from Array problems
Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

Examples:

Input: arr[] = {7, 10, 4, 3, 20, 15}
       k = 3
Output: 7
*/

#include <iostream>

using namespace std;

// swap function

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

// function to sort array using bubble sort

void sort_array(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

// function to print array

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to print kth smallest element

void printKthSmallest(int arr[], int k)
{
    cout << arr[k - 1] << endl;
}

// function to print kth greatest element

void printKthGreatest(int arr[], int n, int k)
{
    cout << arr[n - k] << endl;
}

int main()
{
    int arr[] = {2, 9, 1, 5, 7, 3};
    sort_array(arr, 6);
    print_array(arr, 6);
    printKthGreatest(arr, 6, 2);
    printKthSmallest(arr, 2);
}