#include <iostream>
using namespace std;

int main() {
    int n;
    bool coSoLonHon100 = false;

    cin >> n;
    while (n != -1) {
        if (n > 100) coSoLonHon100 = true;
        cin >> n;
    }

    if (coSoLonHon100) cout << "True";
    else cout << "False";
    return 0;
}