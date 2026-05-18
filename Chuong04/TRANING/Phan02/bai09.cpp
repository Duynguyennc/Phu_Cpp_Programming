#include <iostream>
using namespace std;

int main() {
    int n, soUoc = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) soUoc++;
    }

    cout << soUoc;
    return 0;
}