#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) cout << "No";
    else if (n == 2) cout << "Yes";
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                cout << "No";
                return 0;
            }
        }

        cout << "Yes";
    }

    return 0;
}