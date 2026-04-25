#include <iostream>
using namespace std;

int main()
{
    int n = 4, i = 1;
    double sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i < n);
    cout << sum;
    return 0;
}
