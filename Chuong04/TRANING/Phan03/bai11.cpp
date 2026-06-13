#include <iostream>
using namespace std;

int main() {
    int n, k = -1, soLanDayTang = 0;
    
    cin >> n;
    while (n != -1) {
        if (n > k && k != -1) soLanDayTang++;
        k = n;
        cin >> n;
    }

    cout << soLanDayTang;
    return 0;
}