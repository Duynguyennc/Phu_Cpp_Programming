#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) cout << "None";
    else {
        for (int i = 2; i <= n; i += 2) cout << i << " ";
    }
    return 0;
}