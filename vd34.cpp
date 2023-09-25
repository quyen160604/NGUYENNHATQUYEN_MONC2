#include <iostream>

using namespace std;

int main() {
    char luaChon;
    
    do {
        // Hiển thị menu
        cout << "Menu Tinh Toan" << endl;
        cout << "--------------" << endl;
        cout << "C - Cong" << endl;
        cout << "T - Tru" << endl;
        cout << "N - Nhan" << endl;
        cout << "C - Chia" << endl;
        cout << "Q - Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;
        
        // Thuc hien phep tinh tuong ung
        double so1, so2, ketQua;
        switch (luaChon) {
            case 'C':
            case 'c':
                cout << "Nhap hai so: ";
                cin >> so1 >> so2;
                ketQua = so1 + so2;
                cout << "Ket Qua: " << so1 << " + " << so2 << " = " << ketQua << endl;
                break;
            case 'T':
            case 't':
                cout << "Nhap hai so: ";
                cin >> so1 >> so2;
                ketQua = so1 - so2;
                cout << "Ket Qua: " << so1 << " - " << so2 << " = " << ketQua << endl;
                break;
            case 'N':
            case 'n':
                cout << "Nhap hai so: ";
                cin >> so1 >> so2;
                ketQua = so1 * so2;
                cout << "Ket Qua: " << so1 << " * " << so2 << " = " << ketQua << endl;
                break;
            case 'D':
            case 'd':
                cout << "Nhap hai so: ";
                cin >> so1 >> so2;
                if (so2 != 0) {
                    ketQua = so1 / so2;
                    cout << "Ket Qua: " << so1 << " / " << so2 << " = " << ketQua << endl;
                } else {
                    cout << "Loi: Khong the chia cho 0." << endl;
                }
                break;
            case 'Q':
            case 'q':
                cout << "Tam biet!" << endl;
                break;
            default:
                cout << "Loi: Lua chon khong hop le. Vui long chon mot tuy chon hop le tu menu." << endl;
                break;
        }
        
    } while (luaChon != 'Q' && luaChon != 'q');
    
    return 0;
}
