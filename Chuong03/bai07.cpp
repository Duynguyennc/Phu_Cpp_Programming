#include <iostream>
using namespace std;
int main()
{
    int i = 5, j = 4;
    double f;
    f = (double)i / j;
    cout << f << endl;
    f = i / (double)j;
    cout << f << endl;
    f = (double)i / (double)j;
    cout << f << endl;
    f = (double)(i / j);
    cout << f << endl;
    return 0;
}