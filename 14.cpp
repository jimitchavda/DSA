#include <iostream>
using namespace std;

/*
int pivot(int array[], int size)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return array[start];
}

int pivot(int array[], int size)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return array[start];
}

int binaryRoot(int number)
{
    int s = 0, e = number;
    int mid = (number + s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;

        if (square == number)
        {
            return mid;
        }
        if (square < number)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = (e + s) / 2;
    }
    return ans;
}

double morePrecision(int number, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < number; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
*/

int main()
{
}