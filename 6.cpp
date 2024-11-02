#include <iostream>
using namespace std;

// function for converting decimal to binary

int decToBin(int decNum)
{

    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // binary form
}

int main()
{
    int decNum = 50;

    for (int i = 1; i <= 10; i++)
    {
        cout << decToBin(i) << endl;
    }

    return 0;
}