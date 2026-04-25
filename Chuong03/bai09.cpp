#include <iostream>
using namespace std;
const int NUM = 10;
const double X = 20.5;
int main()
{
    int a = 25, b = 7;
    double z;
    cout << 29 / 4 + 5.5 << endl;
    cout << 3.0 / 2 + 5 << endl;
    cout << 3.0 / 2 << endl;
    cout << 1.5*(11/3) + 7/5 - 1.5 << endl;
    cout << 1.5*11/3 << endl;
    cout << (int)1.521*10 << endl;
    cout << (int)(1.521*10) << endl;
    cout << a/b << endl;
    cout << (double)a/b;
    cout << (double)(a/b);
    cout << "Hello there.\n" << endl;
    cout << "Hello there.";
    cout << "My name is C++.";
    cout << 3+5 << endl;
    cout << "3+5" << endl;
    z = X + 2 * a - b;
    cout << "z = " << z << endl;
    a = 2 * NUM + z;
    cout << "The value of a = " << a << endl;
    return 0;
}