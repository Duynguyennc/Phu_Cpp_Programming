#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cin >> n;
        if (n % 2 == 1) break;
    } while (true);

    cout << n;
    return 0;
}