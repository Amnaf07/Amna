#include <iostream>
#include <vector>
using namespace std;

// linear search algorithm for vectors

int linearSearch(vector<int> &vec, int size, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 3, 5, 7};
    int target = 5;

    cout << linearSearch(vec, vec.size(), target) << endl;
    return 0;
}