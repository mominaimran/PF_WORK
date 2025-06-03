#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inFile;
ofstream outFile;

struct Employee{
    int employeeId;
    string name;
    string designation;
    string dateOfJoining;
    float salary;
};
void openFile() {
    inFile.open("employee.txt");
    outFile.open("output.txt");
    if (!inFile || !outFile) {
        cout << "Error opening file!" << endl;
        exit(1);
    }
}

Employee getData() {
    Employee emp;
    string tempId, tempSalary;
    getline(inFile, tempId);               
    emp.employeeId = stoi(tempId);         
    getline(inFile, emp.name);
    getline(inFile, emp.designation);
    getline(inFile, emp.dateOfJoining);
    getline(inFile, tempSalary);           
    emp.salary = stoi(tempSalary);         
    return emp;
}

void writeData(Employee emp) {
    outFile << "Employee ID: " << emp.employeeId << endl;
    outFile << "Name: " << emp.name << endl;
    outFile << "Designation: " << emp.designation << endl;
    outFile << "Date of Joining: " << emp.dateOfJoining << endl;
    outFile << "Salary: " << emp.salary << endl;
    outFile << "**********************" << endl;
}

int main() {
    const int noOfEmployees = 3;
    Employee employees[noOfEmployees];
    openFile();
    for (int i = 0; i < noOfEmployees; i++) {
        if (!inFile.eof()) employees[i] = getData();
        else break;
    }
    for (int i = 0; i < noOfEmployees; i++) {
        writeData(employees[i]);
    }
    inFile.close();
    outFile.close();
    return 0;
}
