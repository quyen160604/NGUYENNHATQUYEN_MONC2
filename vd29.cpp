#include <iostream>
using namespace std;
int main() 
{
    const double seaLevelRiseRate = 1.5; // Tốc độ tăng mực nước biển (milimet/năm)
    const int numberOfYears = 25; // Số năm cần hiển thị

    cout << "Nam\tTang muc nuoc(milimet)" << endl;
    cout << "-----------------------------" << endl;

    for (int year = 1; year <= numberOfYears; year++) {
        double seaLevelRise = seaLevelRiseRate * year;
        cout << year << "\t" << seaLevelRise << " milimet "<< endl;
    }

    return 0;
}


