#include <iostream>
using namespace std;

int main() 
{
    int n;
    double S = 0;   // Khai báo và khởi tạo S

    do {
        cout << "Nhap n (n > 0): ";
        cin >> n;
    } while (n <= 0);   // Kiểm tra điều kiện

    for (int i = 1; i <= n; i++)    // Giá trị i thay đổi từ 1 đên n
        S = S + i;                  // Tính giá trị biểu thức
    cout << "Tong S = " << S;

    return 0;
}