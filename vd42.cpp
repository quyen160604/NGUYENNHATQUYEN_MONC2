#include <iostream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau;
    int soThang;

    // Nhap lai suat hang nam, so du ban dau va so thang
    cout << "Nhap lai suat hang nam (duoi dang thap phan): ";
    cin >> laiSuatHangNam;
    cout << "Nhap so du ban dau: $";
    cin >> soDuBanDau;
    cout << "Nhap so thang da troi qua: ";
    cin >> soThang;

    double soDu = soDuBanDau;
    double tongTienGuiThem = 0, tongTienRutRa = 0, tongLaiSuat = 0;

    for (int thang = 1; thang <= soThang; thang++) {
        double guiThem, rutRa;

        // Nhap so tien gui them va kiem tra tinh hop le
        do {
            cout << "Nhap so tien gui them trong thang " << thang << ": $";
            cin >> guiThem;
            if (guiThem < 0) {
                cout << "So tien gui them khong the am. Vui long nhap lai.\n";
            }
        } while (guiThem < 0);

        // Nhap so tien rut ra va kiem tra tinh hop le
        do {
            cout << "Nhap so tien rut ra trong thang " << thang << ": $";
            cin >> rutRa;
            if (rutRa < 0) {
                cout << "So tien rut ra khong the am. Vui long nhap lai.\n";
            }
            if (rutRa > soDu) {
                cout << "So tien rut ra khong the lon hon so du hien tai. Vui long nhap lai.\n";
            }
        } while (rutRa < 0 || rutRa > soDu);

        // Tinh lai suat hang thang
        double laiSuatHangThang = laiSuatHangNam / 12;
        double laiSuatThang = soDu * laiSuatHangThang;
        tongLaiSuat += laiSuatThang;

        // Cap nhat so du
        soDu += guiThem - rutRa + laiSuatThang;

        // Cong tong tien gui them va tong tien rut ra
        tongTienGuiThem += guiThem;
        tongTienRutRa += rutRa;
    }

    // Hien thi ket qua
    cout << "\nSo du cuoi ky: $" << soDu << endl;
    cout << "Tong tien gui them: $" << tongTienGuiThem << endl;
    cout << "Tong tien rut ra: $" << tongTienRutRa << endl;
    cout << "Tong lai suat kiem duoc: $" << tongLaiSuat << endl;

    return 0;
}
