#include <iostream>
using namespace std;

int main() {
    int sales1, sales2, sales3, sales4, sales5;
    
    // Nhap doanh so ban hang cho tung cua hang
    cout << "Nhap doanh so ban hang hom nay cua cua hang 1: ";
    cin >> sales1;
    cout << "Nhap doanh so ban hang hom nay cua cua hang 2: ";
    cin >> sales2;
    cout << "Nhap doanh so ban hang hom nay cua cua hang 3: ";
    cin >> sales3;
    cout << "Nhap doanh so ban hang hom nay cua cua hang 4: ";
    cin >> sales4;
    cout << "Nhap doanh so ban hang hom nay cua cua hang 5: ";
    cin >> sales5;

    // Hien thi bieu do cot doanh so ban hang
    cout << "BIEU DO COT DOANH SO BAN HANG" << endl;
    cout << "(Moi '*' tuong trung cho $100)" << endl;
    
    cout << "Cua hang 1: ";
    for (int i = 0; i < sales1 / 100; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Cua hang 2: ";
    for (int i = 0; i < sales2 / 100; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Cua hang 3: ";
    for (int i = 0; i < sales3 / 100; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Cua hang 4: ";
    for (int i = 0; i < sales4 / 100; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Cua hang 5: ";
    for (int i = 0; i < sales5 / 100; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
