#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double func(double a, double b, double c) {
    return (pow(a, 5) - 2 * sqrt(abs(b)) + a * b * c);
}

int main() {
    double a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    cout << "Gia tri x = ";
    cout << setprecision(7) << fixed << func(a, b, c) << endl;
    
    return 0;
}