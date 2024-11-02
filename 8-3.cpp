#include <iostream>
using namespace std;

// linear search algorithm

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 6, 2, 8, 2, 5, 7};
    int sz = 7;
    int target = 7;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}