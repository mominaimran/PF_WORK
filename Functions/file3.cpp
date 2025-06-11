#include <iostream>
using namespace std;

int add(int a, int b); // function declaration

int main() {
    int a,b;
    cout << "please enter two integers: ";
    cin >> a >> b;
    int result = add(a,b);
    cout << a << " + " << b << " = " << result;
    return 0;
}

int add(int a, int b){
    return a+b;
}