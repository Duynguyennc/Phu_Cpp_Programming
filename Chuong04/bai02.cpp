#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {   // Phương trình trở thành bx + c = 0
        if (b == 0) {
            if (c == 0) cout << "Vo so nghiem.";
            else cout << "Vo nghiem.";
        } else 
            cout << "x = " << -c / b;
    } else {
        double delta = b*b - 4*a*c;
        if (delta < 0) cout << "Vo nghiem.";
        else {
            if (delta == 0) {
                cout << "x = " << -b / (2*a);
            } else {
                double x1 = (-b + sqrt(delta)) / (2*a);
                double x2 = (-b - sqrt(delta)) / (2*a);
                cout << "x1 = " << x1 << ", x2 = " << x2;
            }
        }
    }

    return 0;
}