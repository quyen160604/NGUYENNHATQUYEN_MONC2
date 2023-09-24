#include <iostream>
using namespace std;

int main() {
    const double caloMoiPhut = 3.6; // Calo tiêu hao mỗi phút

    cout << "Thoi gian (phut)\tCalo dot chay" << endl;
    cout << "------------------------------------" << endl;

    for (int phut = 5; phut <= 30; phut += 5)
    {
        double caloDaDotChay = caloMoiPhut * phut;
        cout << phut << "\t\t" << caloDaDotChay << endl;
    }

    return 0;
}
