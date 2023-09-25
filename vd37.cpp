#include <iostream>
using namespace std;

int main() {
    int soBanDau;
    double tangTruongNgay, soNgay;

    // Nhập số lượng sinh vật ban đầu (ít nhất là 2)
    do {
        cout << "Nhap so luong sinh vat ban dau (it nhat la 2): ";
        cin >> soBanDau;
    } while (soBanDau < 2);

    // Nhập tỷ lệ tăng trưởng hàng ngày (không âm)
    do {
        cout << "Nhap ty le tang truong hang ngay (khong am, duoi dang phan tram): ";
        cin >> tangTruongNgay;
    } while (tangTruongNgay < 0);

    // Nhập số ngày sinh vat sẽ nhân đôi (ít nhất là 1)
    do {
        cout << "Nhap so ngay sinh vat se nhan doi (it nhat la 1): ";
        cin >> soNgay;
    } while (soNgay < 1);

    // Tính và hiển thị kích thước quần thể cho mỗi ngày
    cout << "Ngay 0: " << soBanDau << " sinh vat" << endl;
    for (int ngay = 1; ngay <= soNgay; ngay++) {
        soBanDau += (soBanDau * tangTruongNgay / 100);
        cout << "Ngay " << ngay << ": " << soBanDau << " sinh vat" << endl;
    }

    return 0;
}

