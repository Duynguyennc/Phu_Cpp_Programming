#include <iostream>
using namespace std;

void f(int& a)
{
    a = 50;
    cout << "Trong ham f: a = " << a << endl;
}
int main()
{
    int x = 5;
    f(x);
    cout << "Trong main: x = " << x << endl;
    return 0;
}