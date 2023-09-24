#include <iostream>
using namespace std;

int main() {
    int num;

    // Yêu cầu người dùng nhập số nguyên dương
    do {
        cout << "Nhập một số nguyên dương: ";
        cin >> num;

        if (num <= 0) {
            cout << "Xin hãy nhập một số nguyên dương dương." << endl;
        }
    } while (num <= 0);

    int total = 0;

    // Tính tổng các số từ 1 đến num
    for (int i = 1; i <= num; i++) {
        total += i;
    }

    cout << "Tổng của các số từ 1 đến " << num << " là: " << total <<endl;

    return 0;
}
