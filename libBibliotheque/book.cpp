#include "book.h"
#include <sstream>

using namespace std;

// Default constructor
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

// Parameterized constructor
Book::Book(const string& title, const string& author, const string& isbn) 
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {}

// Getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerName() const { return borrowerName; }

// Setters
void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(bool available) { this->isAvailable = available; }
void Book::setBorrowerName(const string& name) { this->borrowerName = name; }

// Check out the book
void Book::checkOut(const string& borrower) {
    if (isAvailable) {
        isAvailable = false;
        borrowerName = borrower;
    }
}

// Return the book
void Book::returnBook() {
    isAvailable = true;
    borrowerName = "";
}

// Display book information
string Book::toString() const {
    string availability = isAvailable ? "Disponible" : "Emprunté par " + borrowerName;
    return "Titre: " + title + "\nAuteur: " + author + "\nISBN: " + isbn + "\nStatut: " + availability;
}

// Format for file storage
string Book::toFileFormat() const {
    string result = title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0") + "|";
    result += borrowerName;
    return result;
}

// Parse from file format
void Book::fromFileFormat(const string& line) {
    stringstream ss(line);
    string availability;
    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');
    getline(ss, availability, '|');
    isAvailable = (availability == "1");
    getline(ss, borrowerName);
}