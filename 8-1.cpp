#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int nums[] = {5, 2, 1, 67, -15, -24};

    int size = 6;

    int smallest = INT_MAX;
    int smallIndex = -1;

    int largest = INT_MIN;
    int largeIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallIndex = i;
        }

        // The above logic can also be written as

        // smallest = min(nums[i], smallest);
        // smallIndex = i;
    }

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            largeIndex = i;
        }
        // largest = max(nums[i], largest);
        // largeIndex = i;
    }

    cout << "Smallest = " << smallest << " at index = " << smallIndex << endl;
    cout << "Largest = " << largest << " at index = " << largeIndex << endl;

    return 0;
}