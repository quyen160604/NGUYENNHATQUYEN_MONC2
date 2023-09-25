#include <iostream>
using namespace std;

int main() {
    int soTang, soPhongTrenTang;
    int tongSoPhong = 0, tongPhongDaThue = 0;

    // Kiểm tra đầu vào cho số tầng (ít nhất là 1)
    do {
        cout << "Nhap so tang cua khach san (it nhat la 1): ";
        cin >> soTang;
    } while (soTang < 1);

    // Lặp qua từng tầng để lấy thông tin số phòng
    for (int tang = 1; tang <= soTang; tang++) {
        // Kiểm tra đầu vào cho số phòng trên tầng (ít nhất là 10)
        do {
            cout << "Nhap so phong tren tang " << tang << " (it nhat la 10): ";
            cin >> soPhongTrenTang;
        } while (soPhongTrenTang < 10);

        tongSoPhong += soPhongTrenTang;

        int soPhongDaThue;
        cout << "Nhap so phong da duoc thue tren tang " << tang << ": ";
        cin >> soPhongDaThue;

        // Đảm bảo số phòng đã được thuê không lớn hơn tổng số phòng trên tầng
        if (soPhongDaThue > soPhongTrenTang) {
            cout << "Loi: So phong da duoc thue khong the lon hon tong so phong tren tang." << endl;
            return 1;
        }

        tongPhongDaThue += soPhongDaThue;
    }

    // Tính tỷ lệ phòng đã được thuê (phần trăm)
    double tyLeThue = (static_cast<double>(tongPhongDaThue) / tongSoPhong) * 100.0;

    // Hiển thị kết quả
    cout << "Tong so phong trong khach san: " << tongSoPhong << endl;
    cout << "Tong so phong da duoc thue: " << tongPhongDaThue << endl;
    cout << "Tong so phong trong: " << (tongSoPhong - tongPhongDaThue) << endl;
    cout << "Ty le phong da duoc thue: " << fixed << tyLeThue << "%" << endl;

    return 0;
}
