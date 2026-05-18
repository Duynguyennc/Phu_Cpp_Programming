#include <iostream>
using namespace std;

int main() {
    int n, soChuSo = 0;
    cin >> n;

    while (n > 0) {
        soChuSo++;
        n /= 10;
    }

    cout << soChuSo;
    return 0;
}