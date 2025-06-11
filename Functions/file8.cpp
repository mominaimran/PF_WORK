#include <iostream>
using namespace std;

void countdown(int n){
    if(n==0){
        cout << "Blast Off!" << endl;
        return;
    }
    cout << n << endl;
    countdown(n-1);
}

int main() {
    countdown(6);

    return 0;
}