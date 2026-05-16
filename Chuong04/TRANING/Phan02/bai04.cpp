#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double S = 0;
    for (int i = 1; i <= n; i++)
        S += (double)1 / i;
    cout << fixed << setprecision(2) << S;
    return 0;
}