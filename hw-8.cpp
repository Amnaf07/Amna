#include <iostream>
using namespace std;

// WAF to calculate the sum and product of all numbers in an array

int sumArr(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productArr(int arr[], int size)
{

    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{

    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArr(arr, size);

    cout << "The sum is " << sum << endl;

    int product = productArr(arr, size);

    cout << "The product is " << product << endl;

    return 0;
}