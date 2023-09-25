#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    cout << "Nhap thong tin ve luong hang tuan (nhap 0 de ket thuc):\n";

    while (true) {
        cout << "Nhap ma nhan vien: ";
        cin >> employeeNumber;

        if (employeeNumber == 0) {
            break;
        }

        cout << "Nhap thu nhap gross pay: ";
        cin >> grossPay;

        while (grossPay < 0) {
            cout << "Thu nhap gross pay khong the am. Vui long nhap lai: ";
            cin >> grossPay;
        }

        cout << "Nhap thu nhap thue tieu bang: ";
        cin >> stateTax;

        while (stateTax < 0 || stateTax > grossPay) {
            cout << "Thu nhap thue tieu bang khong hop le. Vui long nhap lai: ";
            cin >> stateTax;
        }

        cout << "Nhap thu nhap thue lien bang: ";
        cin >> federalTax;

        while (federalTax < 0 || federalTax > grossPay) {
            cout << "Thu nhap thue lien bang khong hop le. Vui long nhap lai: ";
            cin >> federalTax;
        }

        cout << "Nhap cac khoan khau tru FICA: ";
        cin >> ficaWithholdings;

        while (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "Cac khoan khau tru FICA khong hop le. Vui long nhap lai: ";
            cin >> ficaWithholdings;
        }

        // Tính thu nhập ròng
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        // Cập nhật tổng cộng
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += netPay;
    }

    // Hiển thị báo cáo tổng cộng
    cout << fixed << setprecision(2);
    cout << "Tong thu nhap gross pay: $" << totalGrossPay << endl;
    cout << "Tong thu nhap thue tiểu bang: $" << totalStateTax << endl;
    cout << "Tong thu nhap thue liên bang: $" << totalFederalTax << endl;
    cout << "Tong cac khoan khau tru FICA: $" << totalFicaWithholdings << endl;
    cout << "Tong thu nhap ròng net pay: $" << totalNetPay << endl;

    return 0;
}
