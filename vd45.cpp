#include <iostream>
using namespace std;

int main() {
    double nganSach;
    double chiPhi;
    double tongChiPhi = 0.0;

    // Yeu cau nguoi dung nhap so tien ngan sach cho thang
    cout << "Nhap so tien ngan sach cho thang: ";
    cin >> nganSach;

    // Su dung vong lap de nhap cac chi phi cho den khi nguoi dung ket thuc
    char tiepTucNhap;
    do {
        cout << "Nhap mot khoan chi phi cho thang: ";
        cin >> chiPhi;
        tongChiPhi += chiPhi;

        cout << "Ban co muon nhap mot khoan chi phi khac khong? (C/K): ";
        cin >> tiepTucNhap;
    } while (tiepTucNhap == 'C' || tiepTucNhap == 'c');

    // Tinh su chenh lech giua ngan sach va tong chi phi
    double chenhLech = nganSach - tongChiPhi;

    // Hien thi ket qua
    if (chenhLech > 0) {
        cout << "Ban tieu it hon ngan sach " << chenhLech << " dong." << endl;
    } else if (chenhLech < 0) {
        cout << "Ban tieu qua ngan sach " << -chenhLech << " dong." << endl;
    } else {
        cout << "Ban da tieu dung ngan sach." << endl;
    }

    return 0;
}
