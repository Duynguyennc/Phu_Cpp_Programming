#include <iostream>
using namespace std;

int main() {
    int n, k = -1;
    bool laDayTang = true;

    cin >> n;
    while (n != -1) {
        if (n < k) laDayTang = false;
        k = n;
        cin >> n;
    }

    if (laDayTang) cout << "True";
    else cout << "False";
    return 0;
}