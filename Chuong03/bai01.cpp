#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Nhap do F: ";
    cin >> x;

    cout << "Chuyen sang do C: " << (5 * (x - 32) / 9.0) << endl;
    return 0;
}