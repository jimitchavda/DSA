#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (array[mid] == key)
        {
            return mid;
        }

        if (key > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd[] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    int index=binarySearch(odd,9,11);
    cout<<"indes of 11 is: "<<index<<endl;
}