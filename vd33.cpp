#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int soNgay;
    
    // Nhap so ngay lam viec va kiem tra tinh hop le
    do {
        cout << "Nhap so ngay lam viec (khong it hon 1 ngay): ";
        cin >> soNgay;
    } while (soNgay < 1);
    
    double luong = 0.01; // Luong ban dau la mot xu
    double tongLuong = 0.0;

    // Hien thi tieu de cua bang
    cout << "Ngay\tLuong (USD)" <<endl;
    cout << "--------------------------" << endl;

    // Tinh va hien thi luong moi ngay va tinh tong luong
    for (int ngay = 1; ngay <= soNgay; ngay++) {
        tongLuong += luong;
        cout << ngay << "\t$" << fixed << setprecision(2) << luong << endl;
        luong *= 2; // Luong tang gap doi moi ngay
    }

    // Hien thi tong luong cuoi cung
    cout << "Tong Luong Cuoi Cung: $" << fixed << setprecision(2) << tongLuong << endl;

    return 0;
}
