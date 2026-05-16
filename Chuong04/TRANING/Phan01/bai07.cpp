#include <iostream>
using namespace std;

int main() {
    double diem;
    cin >> diem;

    if (diem >= 8 && diem <= 10) cout << "Gioi";
    if (diem >= 6.5 && diem < 8) cout << "Kha";
    if (diem >= 5 && diem < 6.5) cout << "Trung binh";
    if (diem >= 3.5 && diem < 5) cout << "Yeu";
    if (diem >= 0 && diem < 3.5) cout << "Kem";
    return 0;
}