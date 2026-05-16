#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool _3, _5;
    if (n % 3 == 0) _3 = true;
    if (n % 5 == 0) _5 = true;

    if (_3 && _5) cout << "chia het cho ca 3 va 5";
    else if (_3) cout << "chia het cho 3";
    else if (_5) cout << "chia het cho 5";
    else cout << "khong chia het cho so nao";
    return 0;
}