#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;
    cout << "Cac so nguyen to < " << N << " la: ";
    for (int i = 1; i < N; i++)
        if (isPrime(i) == true) cout << i << " ";
    return 0;
}