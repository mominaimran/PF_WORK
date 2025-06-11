#include <iostream>
using namespace std;

void modify(int x){
    x += 10;
    cout << "Inside function (value): " << x <<  endl;
}

int main() { 
    int num = 5;
    modify(num);
    cout << "Outside function (original): " << num << endl;

    return 0;
}

//Call by value
// 🧠 You're sending a copy of the variable to the function.
// Changes made inside the function do NOT affect the original variable.