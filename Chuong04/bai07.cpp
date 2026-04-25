// Câu 7
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    long long s = 0, temp = 1;
    for (int i = 1; i <= n; i++) {
        temp *= i;
        s += temp;
    }
    cout << s;
    return 0;
}