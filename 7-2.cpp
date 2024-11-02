#include <iostream>
#include <climits>

using namespace std;

// write a function to reverse the integer n

int reverseInt(int n)
{
    int reverse = 0;

    while (n != 0)
    {
        int digit = n % 10; // Extract the last digit
        n /= 10;            // remove the last digit from n

        // Check for overflow before updating reversed
        if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7))
        {
            return 0; // Return 0 in case of overflow
        }
        if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8))
        {
            return 0; // Return 0 in case of underflow
        }

        reverse = reverse * 10 + digit; // Add the digit to the reversed number
    }

    return reverse;
}

int main()
{

    int n = 875342; // You can change the value to test other numbers
    cout << "Original number: " << n << endl;
    cout << "Reversed number: " << reverseInt(n) << endl;

    return 0;
}