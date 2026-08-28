#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    string publisher;
    bool available;

public:
    // Constructor
    Book();

    Book(int id, string title, string author, string publisher);

    // Setters
    void setBookID(int id);
    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setAvailability(bool status);

    // Getters
    int getBookID() const;
    string getTitle() const;
    string getAuthor() const;
    bool isAvailable() const;
    string getPublisher() const;

    // Display details
    void displayBook();
};

#endif