#include <iostream>
#include <iomanip>
using namespace std;

double cast_to_met_per_sec(double km_per_hour) {
    return km_per_hour / 3.6;
}

int main() {
    double x, y;
    cout << "Nhap quang duong (km): ";
    cin >> x;
    cout << "Nhap thoi gian (h): ";
    cin >> y;

    cout << "Van toc theo don vi m/s: ";
    cout << setprecision(5) << x / y / 3.6;
    return 0;
}