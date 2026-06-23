#include <iostream>
using namespace std;

void hoan_vi(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Truoc khi goi ham hoan vi: ";
    cout << "a = " << a << ", b = " << b << endl;

    hoan_vi(a, b);
    cout << "Sau khi goi ham hoan vi: ";
    cout << "a = " << a << ", b = " << b;
    return 0;
}