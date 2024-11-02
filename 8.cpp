#include <iostream>
using namespace std;

int main()
{
    // arrays

    int size = 5;
    int marks[size];

    // this loop is for taking input of values or inserting values in an array

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // this loop is for printing the values stored in an array

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}