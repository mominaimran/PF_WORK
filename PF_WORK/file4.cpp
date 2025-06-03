#include <iostream>
#include <fstream>
#include <cstdlib>  
using namespace std;

int main(){
    ifstream inFile;
    ofstream outFile;
    char name[50];
    char salary[10];
    float sal;
    char inputFileName[] = "employeein.txt";
    inFile.open(inputFileName);
    if (!inFile) {
        cout << "\nCannot open file " << inputFileName << endl;
        exit(1); }
    char outputFileName[] = "employeeOut.txt";
    outFile.open(outputFileName, ios::out);
    if (!outFile) {
        cout << "\nCannot open file " << outputFileName << endl;
        exit(1);}
    while (!inFile.eof()) {
        inFile >> name >> salary;
        cout << name << "\t" << salary << endl;
        sal = atoi(salary);   
        sal += 200000;       
        outFile << "Name: Ms." << name << ", Salary: " << sal << "\n"; 
    }
    inFile.close();
    outFile.close();
    return 0;
}
