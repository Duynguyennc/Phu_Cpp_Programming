// Câu 5
#include <iostream>
#include <cmath>
using namespace std;

double khoangCach(double Ax, double Ay, double Bx, double By) {
    return sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
}

void fun(double a, double b, double c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (a + b <= c) {
        cout << "Không phải tam giác";
        return;
    }
    
    if (a == b && b == c && c == a) {
        cout << "Tam giác đều";
        return;
    }

    if (c*c == a*a + b*b) {
        if (a == b) cout << "Tam giác vuông cân";
        else cout << "Tam giác vuông";
        return;
    }

    if (a == b || b == c) cout << "Tam giác cân";
    else cout << "Tam giác thường";
}

int main() {
    double Ax, Ay, Bx, By, Cx, Cy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    double AB = khoangCach(Ax, Ay, Bx, By),
           BC = khoangCach(Bx, By, Cx, Cy),
           CA = khoangCach(Cx, Cy, Ax, Ay);
    
    fun(AB, BC, CA);
    return 0;
}