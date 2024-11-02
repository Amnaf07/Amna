#include <iostream>
using namespace std;

// global scope of variable
int x = 4;

void fun()
{
    // local scope of variable

    int z = 6;
}

int main()
{

    int a = 4, b = 8;

    cout << (a & b) << endl;

    cout << (a | b) << endl;

    cout << (a ^ b) << endl;

    cout << (4 << 1) << endl;

    cout << (10 << 2) << endl;

    cout << (10 >> 1) << endl;

    cout << (6 & 10) << endl;

    cout << (6 | 10) << endl;

    cout << (6 ^ 10) << endl;

    cout << "Size of int = " << sizeof(int) << endl;

    cout << "Size of long int = " << sizeof(long int) << endl;

    cout << "Size of short int = " << sizeof(short int) << endl;

    cout << "Size of long long int = " << sizeof(long long int) << endl;

    return 0;
}