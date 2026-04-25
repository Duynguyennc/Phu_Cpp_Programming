#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 4, z;
    double f = 5.0, g = 4.0, h;
    z = x/g;
    h = x/y;
    cout << "Gia tri cua x/y = " << x/y << endl;
    cout << "Gia tri cua f/g = " << f/g << endl;
    cout << "Gia tri cua x/g = " << x/g << endl;
    cout << "Gia tri cua z = " << z << endl;
    cout << "Gia tri cua h = " << h << endl;
    return 0;
}