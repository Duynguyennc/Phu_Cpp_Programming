/*
Ứng dụng quy hoạch động (Dynamic Programming) và dãy số Fibonacy:
F(n) = F(n - 1) + F(n - 2), với F(0) = F(1) = 1, F(2) = 2
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << 1;
        return 0;
    }

    if (n == 2) {
        cout << 2;
        return 0;
    }

    int f1 = 1, f2 = 2, f = 0;
    for (int i = 3; i <= n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }

    cout << f;
    return 0;
}