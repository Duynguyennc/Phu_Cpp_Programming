#include <iostream>
using namespace std;

int main() {
    int n, soSoChiaHetCho5 = 0;
    cin >> n;

    for (int i = 5; i <= n; i += 5) soSoChiaHetCho5++;
    cout << soSoChiaHetCho5;
    return 0;
}