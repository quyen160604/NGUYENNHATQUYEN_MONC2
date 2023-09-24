#include <iostream>
using namespace std;

int main() 
{
    for (int i = 0; i <= 127; i++) 
    {
        cout << static_cast<char>(i) << ' ';

        // Hiển thị 16 ký tự trên mỗi dòng
        if ((i + 1) % 16 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}


