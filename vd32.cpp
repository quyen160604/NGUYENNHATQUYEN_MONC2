#include <iostream>
using namespace std;
int main()
{
    double tocDo, thoiGian;

    // Nhap toc do va thoi gian
    do {
        cout << "Nhap toc do cua phuong tien (miles per hour): ";
        cin >> tocDo;
    } while (tocDo < 0);

    do {
       cout << "Nhap so gio da di chuyen: ";
        cin >> thoiGian;
    } while (thoiGian < 1);

    // Hien thi tieu de
    cout << "Gio   Khoang Cach Da Di" << endl;
    cout << "-------------------------" << endl;

    // Tinh va hien thi khoang cach moi gio
    for (int gio = 1; gio <= thoiGian; gio++) {
        double khoangCach = tocDo * gio;
        cout << gio << "      " << khoangCach << endl;
    }

    return 0;
}
