#include <iostream>
#include "a5_book.hpp"
using namespace std;

// book constructor implementations
Book::Book() : 
    title("n/a"), authors("n/a"), dop("n/a") {}

Book::Book(string new_title) :
    title(new_title), authors("n/a"), dop("n/a") {}

Book::Book(string new_title, string new_authors) :
    title(new_title), authors(new_authors), dop("n/a") {}

Book::Book(string new_title, string new_authors, string new_dop) :
    title(new_title), authors(new_authors), dop("n/a") {}

// book service method
void Book::print() {
    // output the book info to console
    cout << "The book title is: " << title << endl;
    cout << "The book authors is/are: " << authors << endl;
    cout << "The book date of publication is: " << dop << endl;
}
