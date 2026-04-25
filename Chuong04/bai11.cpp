// Câu 11
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    while (b > 0) {
        a = b;
        b = a % b;
    }
    cout << a;

    return 0;
}