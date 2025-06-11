#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string name;
    string author;
    int publishingYear;
};

int main() {
    Book b1 = {"Atomic Habits", "James Clear", 1990};
    cout << "----- Book Dets -----" << endl;
    cout << "Book Name: " << b1.name << '\n' << "Author Name: " << b1.author << '\n' << "Publishing Year: " << b1.publishingYear << endl;

    return 0;
}