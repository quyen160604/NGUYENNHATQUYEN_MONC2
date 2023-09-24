#include <iostream>

using namespace std;

int main() {
    int num;

    // Yeu cau nguoi dung nhap so nguyen duong
    do {
        cout << "Nhap mot so nguyen duong: ";
        cin >> num;

        if (num <= 0) {
            cout << "Xin hay nhap mot so nguyen duong duong." << endl;
        }
    } while (num <= 0);

    int total = 0;

    // Tinh tong cac so tu 1 den num
    for (int i = 1; i <= num; i++) {
        total += i;
    }

    cout << "Tong cua cac so tu 1 den " << num << " la: " << total << endl;

    return 0;
}
