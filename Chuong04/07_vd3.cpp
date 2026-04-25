#include <iostream>
using namespace std;

int main() 
{
    int n, dem = 0;
    cout << "Nhap n: ";
    cin >> n;

    do
    {
        dem++;
        n = n / 10;
    } while (n != 0);
    cout << "So luong chu so cua so nguyen duong n: " << dem;

    return 0;
}