#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        double temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }

    cout << a << " " << b << " " << c;

    return 0;
}