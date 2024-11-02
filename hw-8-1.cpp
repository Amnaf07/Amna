#include <iostream>
using namespace std;

// WAF to swap the max and min number of an array
void swapMaxMin(int arr[], int size)
{
    if (size == 0)
    {
        return; // If the array is empty do nothing
    }
    int maxIndex = 0, minIndex = 0;

    // find indices of the maximum and minimum elements
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    // swap the maximum and minimum elements

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main()
{

    int arr[] = {1, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(arr[0]); // calculate size of array

    cout << "Array before swapping the min and max numbers :  ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapMaxMin(arr, size); // function calling

    cout << "After swapping the min and max numbers: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}