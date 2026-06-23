// Câu 4
#include <iostream>
#include <cmath>
using namespace std;

double t1, t2;
bool voSoNghiem = false;
int soNghiem2 = 2;

double delta(int a, int b, int c) {
    return (b * b - 4 * a * c);
}

void solve2(int a, int b, int c) {
    if (a == 0) {
        if (b == 0)
            if (c == 0) voSoNghiem = true;
            else soNghiem2 = 0;
        else {
            soNghiem2 = 1;
            t1 = -(double)c / b;
        }
    } else {
        double d = delta(a, b, c);
        if (d < 0) soNghiem2 = 0;
        else if (d == 0) {
            soNghiem2 = 1;
            t1 = -(double)b / (2 * a);
        } else {
            soNghiem2 = 2;
            t1 = (-b - sqrt(d)) / (2 * a);
            t2 = (-b + sqrt(d)) / (2 * a);
        }
    }
}

void solve4(int a, int b, int c) {
    solve2(a, b, c);
    if (voSoNghiem) {
        cout << "Vô số nghiệm";
        return;
    }

    if (soNghiem2 == 0) cout << "Vô nghiệm";
    else if (soNghiem2 == 1) {
        if (t1 < 0) cout << "Vô nghiệm";
        else if (t1 == 0) cout << 0;
        else cout << -sqrt(t1) << " " << sqrt(t1);
    } else {
        if (t1 < 0 && t2 < 0) {
            cout << "Vô nghiệm";
            return;
        }
        if (t1 == 0) cout << "0 ";
        else if (t1 > 0) cout << -sqrt(t1) << " " << sqrt(t1) << " ";
        
        if (t2 == 0) cout << "0 ";
        else if (t2 > 0) cout << -sqrt(t2) << " " << sqrt(t2);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    solve4(a, b, c);
    return 0;
}
