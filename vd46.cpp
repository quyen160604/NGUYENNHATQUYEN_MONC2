#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Khởi tạo ngẫu nhiên dựa trên thời gian hiện tại
    srand(time(0));

    // Tạo số ngẫu nhiên trong khoảng từ 1 đến 100
    int soNgauNhien = rand() % 100 + 1;
    
    int doan;
    int soLanDoan = 0;

    cout << "Chao mung ban den voi tro choi doan so!" << endl;

    // Su dung vong lap de cho nguoi dung doan dung so ngau nhien
    do {
        cout << "Hay doan so (tu 1 den 100): ";
        cin >> doan;

        if (doan > soNgauNhien) {
            cout << "Cao qua, hay thu lai." << endl;
        } else if (doan < soNgauNhien) {
            cout << "Thap qua, hay thu lai." << endl;
        }

        soLanDoan++;
    } while (doan != soNgauNhien);

    cout << "Chuc mung ban da doan dung so " << soNgauNhien << " sau " << soLanDoan << " lan doan!" << endl;

    return 0;
}


