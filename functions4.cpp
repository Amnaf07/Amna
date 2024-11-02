#include <iostream>
using namespace std;

int printHello()
{
    cout << "hello" << endl;
    return 7;
}

// sum of 2 numbers

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

// min of 2 numbers

int min(int a, int b)
{

    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// sum of numbers from 1 to N

int sumN(int n)
{
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// factorial of number N

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// call by value

int sum1(int a, int b)
{
    a = a + 10;
    b = b + 10;

    return a + b;
}

// sum of digits

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

// calculate nCr binomial coefficient for n&r

// we know that nCr has the formula n!/ r! (n-r)!

int fact(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r)
{

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n - r);

    return fact_n / (fact_r * fact_nr);
}

// check if a number is prime or not

bool isPrime(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << printHello() << endl;

    cout << sum(7, 2) << endl;

    cout << min(4, 3) << endl;

    cout << sumN(3) << endl;

    cout << factorial(5) << endl;

    int a = 5;
    int b = 4;

    cout << sum1(a, b) << endl;

    cout << a << endl;
    cout << b << endl;

    cout << "Sum of digits is = " << sumOfDigits(2356) << endl;

    int n = 8, r = 2;
    cout << ncr(n, r) << endl;

    cout << isPrime(11) << endl;
}