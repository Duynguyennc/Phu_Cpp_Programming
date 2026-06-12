#include <iostream>
using namespace std;

int main() {
    int n, maxNumber = -1;
    cin >> n;
    
    while (n != -1) {
        if (maxNumber < n) maxNumber = n;
        cin >> n;
    }
    
    if (maxNumber == -1) cout << "None";
    else cout << maxNumber;
    
    return 0;
}