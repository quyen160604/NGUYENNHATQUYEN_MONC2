#include <iostream>

int main() {
    const int size = 10;
    double values[size];

    // Nhập 10 giá trị từ người dùng và lưu vào mảng
    for (int i = 0; i < size; ++i) {
        std::cout << "Nhập giá trị thứ " << i + 1 << ": ";
        std::cin >> values[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất
    double max_value = values[0];
    double min_value = values[0];

    for (int i = 1; i < size; ++i) {
        if (values[i] > max_value) {
            max_value = values[i];
        }

        if (values[i] < min_value) {
            min_value = values[i];
        }
    }

    // Hiển thị kết quả
    std::cout << "Giá trị lớn nhất trong mảng là: " << max_value << std::endl;
    std::cout << "Giá trị nhỏ nhất trong mảng là: " << min_value << std::endl;

    return 0;
}
