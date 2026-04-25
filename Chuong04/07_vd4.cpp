#include <iostream>
using namespace std;

int main() 
{
    int n;
    bool snt = true;
    cout << "Nhap n: ";
    cin >> n;
    if (n < 2) cout << n << " khong phai la so nguyen to.";
    else
    {
        for (int i = 2; i < n; i++) // xét i từ 2 đến n - 1
        {
            if (n % i == 0)
            {
                snt = false;    // n không phải là số nguyên tố
                break;          // không cần kiểm tra tiếp
            }
        }
    }
    if (snt == true) cout << n << " la so nguyen to.";
    else cout << n << " khong phai la so nguyen to.";

    return 0;
}