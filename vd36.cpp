#include <iostream>
using namespace std;

int main() {
    int soNam;
    double luongMuaThang, tongLuongMua = 0;
    
    // Kiểm tra đầu vào cho số năm (ít nhất là 1)
    do {
        cout << "Nhap so nam: ";
        cin >> soNam;
    } while (soNam < 1);
    
    // Vòng lặp ngoài cho từng năm
    for (int nam = 1; nam <= soNam; nam++) {
        // Vòng lặp trong cho từng tháng
        for (int thang = 1; thang <= 12; thang++) {
            do {
                cout << "Nhap luong mua cho thang " << thang << " nam " << nam << " (khong nho hon 0): ";
                cin >> luongMuaThang;
            } while (luongMuaThang < 0);
            
            tongLuongMua += luongMuaThang;
        }
    }
    
    // Tính trung bình luong mua
    int soThang = soNam * 12;
    double trungBinhLuongMua = tongLuongMua / soThang;
    
    // Hiển thị kết quả
    cout << "So thang: " << soThang << endl;
    cout << "Tong luong mua: " << tongLuongMua << " inches" << endl;
    cout << "Trung binh luong mua trong " << soNam << " nam la: " << trungBinhLuongMua << " inches/thang" << endl;
    
    return 0;
}
