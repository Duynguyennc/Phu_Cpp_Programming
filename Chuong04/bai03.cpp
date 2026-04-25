#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if (a == b && b == c && c == a) {
            cout << "Ba so nhap vao la do dai ba canh cua mot tam giac deu.";
            return 0;
        }
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a > c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (c*c == a*a + b*b) {
            if (a == b) cout << "Ba so nhap vao la do dai ba canh cua mot tam giac vuong can.";
            else cout << "Ba so nhap vao la do dai ba canh cua mot tam giac vuong.";
        } else {
            if (a == b || b == c)
                cout << "Ba so nhap vao la do dai ba canh cua mot tam giac can.";
            else cout << "Ba so nhap vao la do dai ba canh cua mot tam giac thuong.";
        }
    } else cout << "Ba so nhap vao khong the la do dai ba canh cua mot tam giac.";

    return 0;
}