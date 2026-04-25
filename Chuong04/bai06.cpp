// Câu 6
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 0) return 1;
    
    double s = 0;
    for (int i = 1; i <= n; i++)
        s += (double)1 / i;
    s /= 2;
    
    cout << setprecision(5) << s;
    
    return 0;
}