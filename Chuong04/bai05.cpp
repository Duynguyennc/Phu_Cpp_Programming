// Câu 05
/*
Tháng:   1    2   3  4  5  6  7  8  9  10 11 12
Số ngày: 31 28/29 31 30 31 30 31 31 30 31 30 31

Năm nhuận: Có 366 ngày (tháng 2 có 29 ngày)
Năm không nhuận: Có 365 ngày (tháng 2 có 28 ngày)

Năm nhuận là năm chia hết cho 4 nhưng không chia
hết cho 100 (đặc biệt: chia hết cho 400 thì vẫn
nhuận).
*/
#include <iostream>
using namespace std;
int main() {
    int m, y;
    cin >> m >> y;    // Đầu vào yêu cầu y > 1975
    
    // Đoạn lệnh xác định tính hợp lệ đầu vào
    // Nếu không không hợp lệ thì xuất thông báo
    // Sau đó kết thúc chương trình.
    bool isInvalid = false;
    if (y <= 1975) {
        cout << "Năm không hợp lệ.\n";
        isInvalid = true;
    } else cout << "Năm hợp lệ.\n";
    if (m < 1 || m > 12) {
        cout << "Tháng không hợp lệ.\n";
        isInvalid = true;
    } else cout << "Tháng hợp lệ.\n";
    if (isInvalid) {
        cout << "=> Input không hợp lệ!\n";
        return 1;
    }    
    //==========================================
    
    switch (m) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12: {
            cout << "Có 31 ngày.\n";
            break;
        }
        case 4: case 6: case 9: case 11: {
            cout << "Có 30 ngày.\n";
            break;
        }
        case 2: {
            bool isLeapYear = false;
            if (y % 4 == 0) {
                isLeapYear = true;
                if (y % 100 == 0) {
                    isLeapYear = false;
                    if (y % 400 == 0)
                        isLeapYear = true;
                }
            }
            if (isLeapYear) cout << "Có 29 ngày.\n";
            else cout << "Có 28 ngày.\n";
            break;        
        }
    }    
    return 0;
}