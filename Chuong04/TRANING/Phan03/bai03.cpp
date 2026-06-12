#include <iostream>
using namespace std;

int main() {
    int n;
    long long s = 0;
    cin >> n;
    
    while (n != -1) {
        s += n;
        cin >> n;
    }

    if (s == 0) cout << "None";
    else cout << s;
    return 0;
}