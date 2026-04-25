#include <iostream>
#include <iomanip>
#define PI 3.14159265358979
using namespace std;

int main() {
    int x;
    cout << "Nhap ban kinh cua duong tron: ";
    cin >> x;

    double P = 2 * x * PI, S = x * x * PI;
    cout << "Chu vi duong tron: ";
    cout << setprecision(15) << P << endl;
    cout << "Dien tich hinh tron: ";
    cout << setprecision(15) << S << endl;
    return 0;
}