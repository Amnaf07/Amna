#include <iostream>
using namespace std;

int main()
{
    // int a = 5;

    // if (a > 0)
    // {
    //     cout << "Positive Number";
    // }
    // else
    // {
    //     cout << "Negative Number";
    // }

    // cout << "\n";

    // int age;

    // cout << "Enter your age = ";
    // cin >> age;

    // if (age < 18)
    // {
    //     cout << "You cannot vote\n";
    // }
    // else
    // {
    //     cout << "You can vote\n";
    // }

    // int b;

    // cout << "Enter the value = \n";
    // cin >> b;

    // if (b % 2 != 0)
    // {
    //     cout << "It is an odd number \n";
    // }
    // else
    // {
    //     cout << "It is an even number \n";
    // }

    // cout << "\n";

    // int marks;

    // cout << "Enter marks=  \n";
    // cin >> marks;

    // if (marks >= 90 && marks <= 100)
    // {
    //     cout << "Grade A+\n";
    // }
    // else if (marks >= 80 && marks <= 89)
    // {
    //     cout << "Grade A \n";
    // }
    // else if (marks >= 70 && marks <= 79)
    // {
    //     cout << "Grade B \n";
    // }
    // else if (marks >= 60 && marks <= 69)
    // {
    //     cout << "Grade C \n";
    // }
    // else if (marks >= 50 && marks <= 59)
    // {
    //     cout << "Grade D \n";
    // }
    // else
    // {
    //     cout << "You are fail \n";
    // }

    // // Question 1: If the character is upper case or lower case

    // char ch;

    // cout << "Enter character: \n";
    // cin >> ch;

    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "It is a lowercase character \n";
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << "It is an uppercase character \n";
    // }

    // // Ternary Statement

    // int z = 7;

    // cout << (z >= 0 ? "positive" : "negative") << endl;

    // While Loop

    // int count = 1;

    // while (count <= 10)
    // {
    //     cout << count << endl;
    //     count++;
    // }

    // For loop

    // int n = 10;

    // for (int p = 1; p <= n; p++)
    // {
    //     cout << p << endl;
    // }

    // Question 2: Sum of numbers from 1 to n

    // int n = 7;
    // int sum = 0;

    // for (int g = 1; g <= n; g++)
    // {

    //     sum += g;
    // }

    // cout << sum << endl;

    // Same work from while loop

    // int n1 = 1;
    // int numb = 7;
    // int sumof = 0;

    // while (n1 <= numb)
    // {
    //     sumof += n1;
    //     n1++;
    // }
    // cout << sumof << endl;

    // Question: Sum of all odd numbers from 1 to n

    // int num;     // limit
    // int sum = 0; // sum

    // cout << "Enter number to calculate the sum = ";
    // cin >> num;

    // for (int n1 = 1; n1 < num; n1 += 2)
    // {
    //     sum += n1;
    // }
    // cout << sum << endl;

    // Same question in for loop for even numbers

    // int num;
    // int sum = 0;
    // int n1 = 1;

    // cout << "Enter number to calculate the sum of even numbers = ";
    // cin >> num;

    // while (n1 <= num)
    // {
    //     if (n1 % 2 == 0)
    //     {
    //         sum += n1;
    //     }

    //     n1++;
    // }
    // cout << sum << endl;

    // Nested loops

    // int m = 7;
    // bool isPrime = true;

    // for (int i = 2; i <= m - 1; i++)
    // {
    //     if (m % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    // {
    //     cout << "Prime no \n";
    // }
    // else
    // {
    //     cout << "Not Prime \n";
    // }

    // int z = 5;

    // for (int i = 1; i <= z; i++)
    // {
    //     int l = 6;

    //     for (int a = 1; a <= l; a++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // HOMEWORK QUESTIONS

    // Sum of all numbers from 1 to N which is divisible by 3

    // int n;
    // int sum = 0;

    // cout << "Enter number to calculate sum of numbers divisible by 3=  ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << "Sum is " << sum;

    // Calculate factorial of a number N

    int n;
    int fact = 1;

    cout << "Enter number to calculate factorial";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial is " << fact;

    return 0;
}