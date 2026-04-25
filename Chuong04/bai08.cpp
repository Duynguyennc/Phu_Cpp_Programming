// Câu 8
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double kq = 0;
    for (int i = 1; i <= n; i++)
        kq = sqrt(i + kq);
    
    cout << setprecision(8) << kq;
    return 0;
}