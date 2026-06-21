#include <iostream>
using namespace std;

int main() {
    int n, previous = -1, now;
    bool switched = false, switchTwice = false, riseAtEnd = false;
    cin >> n;

    while (n > 0) {
        now = n % 10;
        if (now < previous) {
            if (riseAtEnd == false) break; // switched == false
            switched = true;
        }
        
        if (now > previous && switched == true) {
            switchTwice = true;
            break;
        }

        if (now > previous && previous != -1) riseAtEnd = true;

        previous = now;
        n /= 10;
    }

    if (switched == true && switchTwice == false) cout << "True";
    else cout << "False";

    return 0;
}