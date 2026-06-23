// Câu 3
#include <iostream>
#include <cmath>
using namespace std;

double delta(int a, int b, int c) {
    return (b * b - 4 * a * c);
}

void fun(int a, int b, int c) {
    if (a == 0) {
        if (b == 0) 
            if (c == 0) cout << "Vô số nghiệm";
            else cout << "Vô nghiệm";
        else cout << "x = " << -c / (double)b;
    } else {
        double d = delta(a, b, c);
        if (d < 0) cout << "Vô nghiệm";
        else if (d == 0) cout << -(double)b / (2 * a);
        else {
            cout << (double)(-b - sqrt(d)) / (2 * a) << " ";
            cout << (double)(-b + sqrt(d)) / (2 * a);
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    fun(a, b, c);
    return 0;
}