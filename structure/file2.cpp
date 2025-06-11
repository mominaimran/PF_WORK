#include <iostream>
using namespace std;

struct Book
{
    string name;
    string author;
    int price;
};

int main() {
    Book books[3];
    for(int i=0; i<3; i++){
        cout << "Enter dets of Book " << i+1 << ":" << endl;

        cin.ignore(); // 👉 Flush newline before first getline

        cout << "Enter book name: ";
        getline(cin, books[i].name);
        cout << "Enter author name: ";
        getline(cin, books[i].author);
        cout << "Enter price: ";
        cin >> books[i].price;
    }

    for(int i=0; i<3; i++){
        cout << "--- Book " << i+1 << " dets ---" << endl;
        cout << "Book Name: " << books[i].name << endl;
        cout << "Book Author: " << books[i].author << endl;
        cout << "Book Price: " << books[i].price << endl;
    }

    return 0;
}