#include <iostream>
using namespace std;

int main() {
    int n, temp = 10;
    bool noChange = true;
    cin >> n;

    if (n < 10) {
        cout << "Yes";
        return 0;
    }

    while (n > 0) {
        if (temp < n % 10) {
            cout << "No";
            return 0;
        } else {
            if ((temp < 10) && (temp != n % 10)) noChange = false;
            temp = n % 10;
            n /= 10;
        }
    }

    if (noChange == false) cout << "Yes";
    else cout << "No";
    return 0;
}