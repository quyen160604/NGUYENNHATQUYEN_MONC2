#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    
    if (!inputFile) {
        cerr << "Loi khi mo tep tin." << endl;
        return 1;
    }

    int nam = 1900;
    int danSo;
    
    cout << "SU TANG TRUONG DAN SO PRAIRIEVILLE" << endl;
    cout << "(moi '*' tuong trung cho 1,000 nguoi)" << endl;

    while (inputFile >> danSo) {
        cout << nam << " ";
        
        // In ra mot '*' cho moi 1,000 nguoi
        for (int i = 0; i < danSo / 1000; i++) {
            cout << "*";
        }
        
        cout << endl;

        // Cap nhat nam cho giai doan tiep theo
        nam += 20;
    }

    inputFile.close();
    return 0;
}
