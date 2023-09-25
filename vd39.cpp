
#include <iostream>
using namespace std;

int main() {
    int soNhap, soLonNhat, soNhoNhat;

    // Khởi tạo soLonNhat và soNhoNhat bằng giá trị đầu tiên
    cout << "Nhap mot chuoi cac so nguyen (-99 de ket thuc): ";
    cin >> soNhap;

    if (soNhap == -99) {
        cout << "Chuoi rong. Khong co so nao duoc nhap." << endl;
        return 1;
    }

    soLonNhat = soNhap;
    soNhoNhat = soNhap;

    // Sử dụng vòng lặp để nhập và tìm số lớn nhất và số nhỏ nhất
    while (soNhap != -99) {
        // Kiểm tra nếu số nhập là lớn nhất hoặc nhỏ nhất
        if (soNhap > soLonNhat) {
            soLonNhat = soNhap;
        }
        if (soNhap < soNhoNhat) {
            soNhoNhat = soNhap;
        }

        cin >> soNhap;
    }

    // Hiển thị kết quả
    cout << "So lon nhat: " << soLonNhat << endl;
    cout << "So nho nhat: " << soNhoNhat << endl;

    return 0;
}
