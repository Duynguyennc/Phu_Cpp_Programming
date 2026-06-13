#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, soSoDaNhap = 0;
    double trungBinhCong;

    cin >> n;
    while (n != -1) {
        soSoDaNhap++;
        trungBinhCong += n;
        cin >> n;
    }

    trungBinhCong /= soSoDaNhap;
    cout << fixed << setprecision(1) << trungBinhCong;
    return 0;
}