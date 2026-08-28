#include "Book.h"

using namespace std;

//------------------------------------------------------
// Default Constructor
// Initializes a new book with default values
//------------------------------------------------------
Book::Book()
{
    bookID = 0;
    title = "";
    author = "";
    publisher = "";
    available = true;
}

//------------------------------------------------------
// Parameterized Constructor
// Creates a book using provided information
//------------------------------------------------------
Book::Book(int id, string title, string author, string publisher)
{
    // Assign parameter values to class variables
    bookID = id;
    this->title = title;
    this->author = author;
    this->publisher = publisher;

    // New books are available by default
    available = true;
}

//------------------------------------------------------
// Setters
// Used to update private class variables
//------------------------------------------------------

void Book::setBookID(int id)
{
    bookID = id;
}

void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::setPublisher(string publisher)
{
    this->publisher = publisher;
}

void Book::setAvailability(bool status)
{
    available = status;
}

//------------------------------------------------------
// Getters
// Used to retrieve private class variables
//------------------------------------------------------

int Book::getBookID() const
{
    return bookID;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getPublisher() const
{
    return publisher;
}

bool Book::isAvailable() const
{
    return available;
}

//------------------------------------------------------
// Display Book Information
//------------------------------------------------------
void Book::displayBook()
{
    cout << "Book ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;

    cout << "Status: ";

    // Check if the book is available
    if (available)
    {
        cout << "Available" << endl;
    }
    else
    {
        cout << "Issued" << endl;
    }

    cout << "------------------------" << endl;
}