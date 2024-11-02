#include <iostream>
using namespace std;

// write a function to print all prime numbers from 2 to N.

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}
void allPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{

    int n;

    cout << "Enter a number for calculation of prime numbers = ";

    cin >> n;

    allPrime(n);

    return 0;
}