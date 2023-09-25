#include <iostream>
using namespace std;
int main()
{
    double membershipFee = 2500.0; // Phí thành viên ban đầu
    double increaseRate = 0.04; // Tỷ lệ tăng phí hàng năm

    cout << "Nam\tmuc phi thanh vien" << endl;
    cout << "------------------------" << endl;

    for (int year = 1; year <= 6; year++) {
        cout << year << "\t$" << membershipFee << endl;
        membershipFee += membershipFee * increaseRate; // Tăng mức phí
    }

    return 0;
}
