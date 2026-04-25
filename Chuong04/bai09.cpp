// Câu 9
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Không có.";
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (i == 2) {
            cout << i << " ";
            continue;
        }
        int flag = 0;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << i << " ";
    }
    return 0;
}