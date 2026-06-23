// Câu 6
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int func(int n, int m) {
    int end = 1, result = 0;
    if (n >= m) end = m;
    else end = n;

    for (int i = 2; i <= end; i++) {
        if ((n % i == 0) && (m % i == 0) && (isPrime(i) == true))
            result += i;
    }

    if (result == 0) return -1;
    else return result;
}

int main() {
    int n, m, end = 1;
    cin >> n >> m;

    cout << func(n, m);

    return 0;
}