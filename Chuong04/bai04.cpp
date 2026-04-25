// Cau 04
#include <iostream>
using namespace std;
int main() {
    double s;
    cin >> s;
    if (s < 0) {
        cout << "Số km không thể âm!";
        return 1;
    }
    if (s == 0) {
        cout << "0";
        return 0;
    }
    
    int tien = 15000;
    s -= 0.5;
    if (s <= 29.5) {
        tien += s * 20500;
        cout << tien;
        return 0;
    }
    tien += 29.5 * 20500;
    s -= 29.5;
    tien += s * 18600;
    if (s > 90) tien *= 0.9;
    cout << tien;
    return 0;
}