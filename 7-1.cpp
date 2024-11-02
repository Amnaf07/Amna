#include <iostream>
using namespace std;

// Write code to find if a number is a power of 2

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{

    int n = 16;

    if (isPowerOfTwo(n))
    {
        cout << n << " is power of 2. " << endl;
    }
    else
    {
        cout << n << " is not a power of 2. " << endl;
    }

    return 0;
}