#include <iostream>
#include <fstream>
#include <string>   
using namespace std;

int main(){
    ifstream inFile;
    string name, sal, dept;

    string inputFileName = "file1.txt";
    inFile.open(inputFileName);

    if (!inFile) {
        cout << "Can't open input file named: " << inputFileName << endl;
        exit(1);
    }
    while (inFile >> name >> sal >> dept) {
        cout << name << "\t" << sal << "\t" << dept << endl;
    }

    inFile.close(); 
    return 0;
}
