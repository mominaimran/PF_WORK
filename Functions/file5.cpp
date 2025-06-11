#include <iostream>
using namespace std;

int func(int a, int b){
    cout << "multiplication" << endl;
    return a*b;
}
float func(double a, double b){
    cout << "subtraction" << endl;
    return a-b;
}
int func(int a, int b, int c){
    cout << "addition" << endl;
    return a+b+c;
}

int main() {
    cout << func(2,2) << endl;
    cout << func(2.4,2.6) << endl;
    cout << func(2,2,2) << endl;

    return 0;
}