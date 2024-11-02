#include <iostream>
using namespace std;

int main()
{
    // Triangle Pattern

    // int n = 6;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Triangle Pattern (123)

    // int m = 4;

    // for (int k = 0; k < m; k++)
    // {
    //     for (int l = 0; l < k + 1; l++)
    //     {
    //         cout << (k + 1);
    //     }
    //     cout << endl;
    // }

    // ABC

    // int n = 5;

    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch = ch + 1;
    //     cout << endl;
    // }

    // 123

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Backward Loop

    // int n = 5;

    // for (int i = n; i > 0; i--)
    // {
    //     cout << i << endl;
    // }

    // Backward 1234

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Same problem with backward ABC

    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {

    //     ch = 'A' + i;

    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << ch << " ";
    //         ch--;
    //     }

    //     cout << endl;
    // }

    // Floyd's Triangle Pattern

    // int n = 5;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Homework Problem same problem with ABC (Floyd's Triangle)

    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Inverted Triangle Pattern

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     // Printing spaces

    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // Printing Numbers
    //     for (int k = 1; k < n - i; k++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // Same problem with ABC

    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << ch;
    //             }
    //     ch++;
    //     cout << endl;
    // }

    // Pyramid Problem

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces : n-i-1

    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // nums1 : i+1

    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }

    //     // num2 : backward loop for num 2

    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // Hollow Diamond Pattern

    // int n = 6;

    // // top

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces

    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     cout << "*";

    //     if (i != 0)
    //     {
    //         // spaces
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Bottom

    // for (int i = 0; i < n - 1; i++)
    // {
    //     // spaces

    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != n - 2)
    //     {
    //         // spaces
    //         for (int j = 0; j < 2 * (n - i) - 5; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Butterfly Pattern

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // first triangle

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // spaces1
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // second triangle

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom part

    for (int i = n - 1; i >= 0; i--)
    {
        // third triangle
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // fourth triangle

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
