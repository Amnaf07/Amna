#include <iostream>
using namespace std;

int main()
{

    // PATTERNS

    // Square Pattern

    // In form of stars (*)
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // In form of numbers (1234)

    int a = 5;

    for (int b = 0; b <= a; b++)
    {
        for (int c = 1; c <= a; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    // In form of characters ('ABCD')

    int m = 5;

    for (int p = 0; p < m; p++)
    {
        char ch = 'A';
        for (int q = 1; q < m; q++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    // Square Pattern in counting

    int num = 1;
    int r = 3;

    for (int s = 0; s < r; s++)
    {
        for (int y = 0; y < r; y++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Homework Problem in Square Pattern   (ABC)

    char ch = 'A';
    int k = 3;

    for (int l = 0; l < k; l++)
    {
        for (int f = 0; f < k; f++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}