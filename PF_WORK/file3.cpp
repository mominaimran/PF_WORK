#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outfile;
    string outputFileName = "myFileOut.txt";
    string outputText = "Welcome to PF CS111";
    outfile.open(outputFileName, ios::out);
    if (!outfile) {
        cout << "Can't open file for writing." << endl;
        exit(1);
    }
    outfile << outputText;
    outfile.close();  
    ifstream infile;
    string readText;
    infile.open(outputFileName);
    if (!infile) {
        cout << "Can't open file for reading." << endl;
        exit(1);
    }
    getline(infile, readText);
    cout << "Data read from file: " << readText << endl;
    infile.close(); 
    return 0;
}
