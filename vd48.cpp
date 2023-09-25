#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the input file

    if (!inputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    string studentName;
    int studentCount = 0;

    cout << "List of Students in Line Up:" << endl;

    while (getline(inputFile, studentName)) {
        studentCount++;
        cout << "Student " << studentCount << ": " << studentName << endl;
    }

    inputFile.close(); // Close the input file

    if (studentCount == 0) {
        cout << "No students in line up." << endl;
    } else {
        cout << "Total students in line up: " << studentCount << endl;
    }

    return 0;
}
