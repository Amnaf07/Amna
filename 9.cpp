#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec = {1, 4, 7};
    // cout << vec[0] << endl;

    // vector<int> vec1(4, 7);
    // cout << vec1[0] << endl;
    // cout << vec1[1] << endl;
    // cout << vec1[2] << endl;
    // cout << vec1[3] << endl;

    // for each loop

    // vector<char> vec2 = {'a', 'b', 'c'};

    // for (char val : vec2)
    // {
    //     cout << val << endl;
    // }

    // // vector functions

    // vector<int> vect;

    // cout << "size = " << vect.size() << endl;

    // vect.push_back(7);
    // vect.push_back(2);
    // vect.push_back(23);
    // vect.push_back(44);

    // cout << "Size after pushback = " << vect.size() << endl;

    // vect.pop_back();

    // cout << "Value at the front = " << vect.front() << endl;
    // cout << "Value at the back = " << vect.back() << endl;

    // cout << "By use of at function = " << vect.at(2) << endl;

    // for (int val : vect)
    // {
    //     cout << val << endl;
    // }

    vector<int> vector1;

    vector1.push_back(2);
    vector1.push_back(86);
    vector1.push_back(3);

    cout << "Size of vector 1 = " << vector1.size() << endl;
    cout << "Capacity of vector 1 = " << vector1.capacity() << endl;

    return 0;
}