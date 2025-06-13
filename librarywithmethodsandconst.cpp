/*Create a program using classes in C++ to manage a simple library system with the following: */

#include<iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;
    bool isAvailable;

    Book(string t, string a, int y, bool i) {
        title = t;
        author = a;
        year = y;
        isAvailable = i;
    }
};

Book obj1("Bishop", "Igor washer", 2001, true);
Book obj2("Harry Potter", "J K ROWLING", 2000, false);

void displayDetails() {
    cout << obj1.title << " " << obj1.author << " " << obj1.year << " " << (obj1.isAvailable ? "Available" : "Not Available") << endl;
    cout << obj2.title << " " << obj2.author << " " << obj2.year << " " << (obj2.isAvailable ? "Available" : "Not Available") << endl;
}

void borrowBook() {
    if (obj1.isAvailable) {
        obj1.isAvailable = false;
        cout << "You borrowed \"" << obj1.title << "\".\n";
    } else {
        cout << "Sorry, \"" << obj1.title << "\" is not available.\n";
    }
}

int main() {
    displayDetails();
    borrowBook();
    displayDetails();

    return 0;
}
