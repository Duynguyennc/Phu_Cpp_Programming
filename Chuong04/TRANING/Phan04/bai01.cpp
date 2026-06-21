#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 50000 == 0) cout << "OK";
    else cout << "INVALID";
    
    return 0;
}