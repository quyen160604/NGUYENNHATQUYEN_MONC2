#include <iostream>
using namespace std;

int main() {
    // Hiển thị tiêu đề của bảng
    cout << "Celsius  Fahrenheit" << endl;
    cout << "-------------------" << endl;

    // Sử dụng vòng lặp để hiển thị bảng từ 0 đến 20 độ Celsius
    for (int celsius = 0; celsius <= 20; celsius++) {
        // Chuyển đổi độ Celsius thành Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        
        // Hiển thị nhiệt độ Celsius và tương đương Fahrenheit
        cout << celsius << "        " << fahrenheit << endl;
    }

    return 0;
}
