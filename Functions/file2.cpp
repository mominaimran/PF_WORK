#include <iostream>
using namespace std;

char func(int a, float b, char c){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return c;
}

int main() {
    char myChar = func(2,3.5,'*');
    cout << myChar;
    return 0;
}