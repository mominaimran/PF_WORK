#include <iostream>
using namespace std;

void modify(int &x) {  // & means reference
    x = x + 10;
    cout << "Inside function (reference): " << x << endl;
}

int main() {
    int num = 5;
    modify(num);
    cout << "Outside function (original changed): " << num << endl;

    return 0;
}

// 📌 Call by Reference
// 🧠 You're sending the actual variable's memory to the function.
// Changes made inside the function DO affect the original variable.