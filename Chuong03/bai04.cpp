#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap mot so nguyen co ba chu so: ";
    cin >> n;
  
    cout << "Hang tram: " << (n / 100) << endl;
    n %= 100;
    cout << "Hang chuc: " << (n / 10) << endl;
    n %= 10;
    cout << "Hang don vi: " << n << endl;

    return 0;
}