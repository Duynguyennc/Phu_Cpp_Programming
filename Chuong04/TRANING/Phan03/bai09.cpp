#include <iostream>
using namespace std;

int main() {
    int n, soChanLonNhat = -1;

    cin >> n;
    while (n != -1) {
        if ((n % 2 == 0) && (n > soChanLonNhat))
            soChanLonNhat = n;
        cin >> n; 
    }

    if (soChanLonNhat != -1) cout << soChanLonNhat;
    else cout << "None";
    return 0;
}