#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("out5.txt");
    ofstream outFile("sample.txt");

    char ch;
    while(!inFile.eof()){
        inFile.get(ch);
        outFile << ch;
    }
    inFile.close();

    return 0;
}