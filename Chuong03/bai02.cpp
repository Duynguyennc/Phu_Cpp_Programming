#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong binh phuong (" 
        << a << "^2 + " << b << "^2) = "
        << (a * a + b * b) << endl;
    
    return 0;
}