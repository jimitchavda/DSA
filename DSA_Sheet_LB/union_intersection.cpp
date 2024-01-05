/*
Q6 from Array
Given two unsorted arrays that represent two sets (elements in every array are distinct), find the union and intersection of two arrays.

Example:

arr1[] = {7, 1, 5, 2, 3, 6}
arr2[] = {3, 8, 6, 20, 7}

Then your program should print Union as {1, 2, 3, 5, 6, 7, 8, 20} and Intersection as {3, 6, 7}. Note that the elements of union and intersection can be printed in any order.
*/

#include <iostream>
#include <cmath>

using namespace std;

// function to print whole array
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// function to print intersection of arrays
// only those elements will be printed which are common(equal) in both od them

void intersection(int arr1[], int n1, int arr2[], int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}

/* function for printing union
first array 1 will be priinted,
then the elements will be compared,
incase they are unique they will be printed
*/

void unionop(int arr1[], int n1, int arr2[], int n2)
{
    print_array(arr1, n1);
    for (int j = 0; j < n2; j++)
    {
        bool isUnique = true;
        for (int i = 0; i < n1; i++)
        {
            if (arr1[i] == arr2[j])
            {
                isUnique = false; // element is not unique
            }
        }
        if (isUnique) // if element is unique it will be executed
        {
            cout << arr2[j] << " ";
        }
    }
}

int main()
{
    int k[] = {7, 1, 5, 2, 3, 6};
    int i = 6;
    int l[] = {3, 8, 6, 20, 7};
    int j = 5;
    intersection(k, i, l, j);
    cout << endl;
    unionop(k, i, l, j);
    cout << endl;
}