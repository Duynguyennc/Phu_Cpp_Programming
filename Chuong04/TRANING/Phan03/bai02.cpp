#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "None";
        return 0;
    }

    while (n != 0) {
        cout << n << " ";
        cin >> n;
    }

    return 0;
}