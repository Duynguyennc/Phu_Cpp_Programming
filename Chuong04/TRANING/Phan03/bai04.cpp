#include <iostream>
using namespace std;

int main() {
    int n, soSoChan = 0;
    cin >> n;

    while (n != 0) {
        if (n % 2 == 0) soSoChan++;
        cin >> n;
    }

    cout << soSoChan;
    return 0;
}