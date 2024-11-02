#include <iostream>
using namespace std;

// WAF to print all the unique values in an array

void printUnique(int arr[], int size)
{
    // loop through each element and check its occurence
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        // if its unique print it

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 3, 1, 3, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements in an array: ";
    printUnique(arr, size);

    return 0;
}