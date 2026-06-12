#include <iostream>
using namespace std;

int main() {
    int n;
    bool chuaCoSoChanDauTien = true;
    cin >> n;
    
    while (n != -1) {
        if (n % 2 == 0 && chuaCoSoChanDauTien) {
            cout << n;
            chuaCoSoChanDauTien = false;
        }
        cin >> n;
    }
    
    if (chuaCoSoChanDauTien == true) cout << "None";
    return 0;
}