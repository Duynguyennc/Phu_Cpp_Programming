#include <iostream>
using namespace std;

double Tong(int a, int b)
{
    double S;
    S = a + b;
    return S;
}
int main()
{
    int x, y;
    x = 5;
    y = 10;
    cout << x << " + " << y << " = ";
    cout << Tong(x, y);
    return 0;
}