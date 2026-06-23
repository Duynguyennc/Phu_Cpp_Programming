// Câu 1
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Không tồn tại số nguyên tố nhỏ hơn n = " << n;
        return 1;
    }

    int s = 0;
    for (int i = 2; i < n; i++)
        if (isPrime(i) == true) s += i;

    cout << s;
    return 0;
}