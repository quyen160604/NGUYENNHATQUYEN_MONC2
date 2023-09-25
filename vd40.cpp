#include <iostream>
#include <string>
using namespace std;

int main() {
    int soHocSinh;

    cout << "Nhap so luong hoc sinh trong lop (tu 1 den 25): ";
    cin >> soHocSinh;

    while (soHocSinh < 1 || soHocSinh > 25) {
        cout << "Nhap lai so luong hoc sinh (tu 1 den 25): ";
        cin >> soHocSinh;
    }

    string tenDauHang, tenCuoiHang;

    for (int i = 0; i < soHocSinh; i++) {
        string ten;
        cout << "Nhap ten cua hoc sinh " << i + 1 << ": ";
        cin >> ten;

        if (i == 0 || ten < tenDauHang) {
            tenDauHang = ten;
        }

        if (i == 0 || ten > tenCuoiHang) {
            tenCuoiHang = ten;
        }
    }

    cout << "Hoc sinh dung dau hang: " << tenDauHang << endl;
    cout << "Hoc sinh dung cuoi hang: " << tenCuoiHang << endl;

    return 0;
}
