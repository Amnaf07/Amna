#include <iostream>
using namespace std;

int main()
{
    // This is the use of variables and data types
    int num = 07;
    cout << sizeof(num) << "\n";

    char country = 'T';
    cout << country << endl;

    float PI = 3.14f;
    cout << PI << endl;

    double cost = 70.77;
    cout << cost << endl;

    bool isClose = true;
    cout << isClose << endl;

    cout << "\n";
    // This is the use of endline and nextline characters
    cout << "My name is Anna \n";
    cout << "Print A" << endl;
    cout << "Print all" << endl;
    cout << "Print B\n";
    cout << "Amna\n";
    cout << "Fazal\n";

    // Type Casting

    // Implicit
    char alpha = 'a';
    int val = int(alpha);
    cout << val << endl;

    // Explicit
    double price = 99.9999;
    int newPrice = int(price);
    cout << newPrice << endl;

    // Use of cin >> statement
    float value;

    cout << "Enter the value = " << endl;
    cin >> value;
    cout << "You entered the value = " << value << endl;

    // Arithmetic Operators

    int a = 10;
    int b = 2;

    cout << "Sum = " << (a + b) << endl;
    cout << "Difference = " << (a - b) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Divide = " << (a / b) << endl;
    cout << "Modulus = " << (a % b) << endl;

    // Relational Operators

    cout << (3 < 5) << endl;
    cout << (3 <= 5) << endl;
    cout << (3 > 5) << endl;
    cout << (3 >= 5) << endl;
    cout << (3 == 3) << endl;
    cout << (3 != 3) << endl;

    // Practice Question = Sum of 2 numbers

    int f, g;

    cout << "Enter value of 1st number = " << endl;
    cin >> f;

    cout << "Enter value of 2nd number = " << endl;
    cin >> g;

    cout << "Sum is = " << (f + g) << endl;

    // Unary Operators

    // Post Increment

    int x = 7;
    int y = x++; // result; update

    cout << y << endl;
    cout << x << endl;

    // Pre Increment

    int h = 9;
    int i = ++h; // update; result

    cout << i << endl;
    cout << h << endl;

    // Post Decrement

    int p = 3;
    int q = p--; // result; update

    cout << q << endl;
    cout << p << endl;

    // Pre Decrement

    int r = 2;
    int s = --r; // result; update

    cout << s << endl;
    cout << r << endl;

    return 0;
}