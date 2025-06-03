#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("out2.txt");
    char str[200] = "Time is a great teacher but unfortunately it kill all its pupil! ";
    outFile << str;
    cout << "Data written to a file \n";
    outFile.close();

    return 0;
}