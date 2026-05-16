#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;

    const double pi = 3.14159265358979;
    double P = 2 * r * pi, S = r * r * pi;
    cout << fixed << setprecision(4) << P << endl << S;
    return 0;
}