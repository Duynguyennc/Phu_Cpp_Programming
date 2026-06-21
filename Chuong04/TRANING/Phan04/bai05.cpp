#include <iostream>
using namespace std;

int main() {
    string s;
    bool isValidLength = true, _123 = false;
    cin >> s;

    if (s.length() < 8) isValidLength = false;
    else {
        for (int i = 0; i < s.length(); i++) {
            if (int(s[i]) >= 48 && int(s[i]) <= 57) _123 = true;
        }
    }

    if (isValidLength && _123) cout << "True";
    else cout << "False";

    return 0;
}