#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) cout << 15000;
    else if (n >= 2 && n <= 5) cout << (15000 + (n - 1) * 13000);
    else cout << (67000 + (n - 5) * 11000);

    return 0;
}