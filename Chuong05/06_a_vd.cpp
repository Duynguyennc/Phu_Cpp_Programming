#include <iostream>
using namespace std;

int Nhap() 
{
    int a;
    cout << "Nhap so nguyen n: ";
    cin >> a;
    return a;
}

int main()
{
    int n;
    n = Nhap();
    cout << "Dang chay trong main: n = " << n;
    return 0;
}