#include <iostream>
using namespace std;

/*
int q1_binSearch(int array[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = (e + s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (array[mid] == key)
        {
            ans = mid;
            e - 1;
        }
        else if (key > array[mid])
        {
            s = mid + 1;
        }
        else if (key < array[mid])
        {
            e = mid - 1;
        }
        mid = (e + s) / 2;
    }
    return ans;
}

void q1(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            cout << "the first appearance of the key is at: " << i << endl;
            break;
        }
    }
    for (int i = (size - 1); i >= 0; i--)
    {
        if (array[i] == key)
        {
            cout << "the last appearance of the key is at: " << i << endl;
            break;
        }
    }
}

int q1_occurrence(int array[], int size, int key)
{
    int first, last;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            first = i;
            break;
        }
    }
    for (int i = (size - 1); i >= 0; i--)
    {
        if (array[i] == key)
        {
            last = i;
            break;
        }
    }
    return (last - first + 1);
}

int peak(int array[], int size)
{

    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    int peak;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] >= array[mid-1] && array[mid] >= array[mid+1])
        {
            peak = array[mid];
            break;
        }
        else if (array[mid] < array[mid + 1])
        {
            peak=array[mid+1];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return peak;
}
*/

int main()
{
}