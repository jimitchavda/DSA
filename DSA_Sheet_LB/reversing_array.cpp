/*
Q1 from Array problems

Given an array (or string), the task is to reverse the array/string.
Examples : 
 
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/

#include <iostream>

using namespace std;


// function to reverse the elements from 0 to n/2
void reverse_array(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

//function to print whole array
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
    int arr[] = {1, 2, 3, 4, 5, 7};
    reverse_array(arr, 6);
    print_array(arr, 6);
}