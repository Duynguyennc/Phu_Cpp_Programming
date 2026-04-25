#include <iostream>
using namespace std;

int main() {
    double s;
    cin >> s;   // Nhập s (km) là tổng quãng đường taxi đi
    if (s == 0) {
        cout << 0;
        return 0;
    }
    double tien = 15000;
    s -= 0.5;
    if (s <= 0) {
        cout << tien;
        return 0;
    }
    s -= 29.5;
    if (s >= 29.5) {
        tien += 29.5 * 20500;
    } else {

    }
}