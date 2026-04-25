#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double _1st = a, _2nd = a, _3rd = a;
    if (_1st < b) _1st = b;
    if (_1st < c) _1st = c;

    if (_2nd == _1st) {
        _2nd = b;
        if (_2nd < c) _2nd = c;
    } else {
        if (_1st == b) {
            if (_2nd < c) _2nd = c;
        } else {
            if (_2nd < b) _2nd = b;
        }
    }
    
    if (_3rd > b) _3rd = b;
    if (_3rd > c) _3rd = c;

    cout << _3rd << " " << _2nd << " " << _1st;
    
    return 0;
}