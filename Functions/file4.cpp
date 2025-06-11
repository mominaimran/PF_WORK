#include <iostream>
#include <string>
using namespace std;

void greet(string name="guest"){
    cout << "Hi! " << name << endl;
}

int main() {
    greet();
    greet("Momina");
    return 0;
}