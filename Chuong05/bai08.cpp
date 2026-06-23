#include <iostream>
using namespace std;

int reverse(int N) {
    int N_reverse = 0;

    while (N > 0) {
        N_reverse = N_reverse * 10 + (N % 10);
        N /= 10;
    }

    return N_reverse;
}

int main() {
    int n;
    cin >> n;

    cout << reverse(n);
    
    return 0;
}