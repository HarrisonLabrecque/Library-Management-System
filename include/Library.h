#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Student.h"

#include <vector>
#include <string>

class Library
{
private:

    // Stores all books in the library
    std::vector<Book> books;

    // Stores all registered students
    std::vector<Student> students;


public:

    //------------------------------------------------------
    // Book management functions
    //------------------------------------------------------

    // Add a new book to the library
    void addBook(Book book);

    // Remove a book using its ID
    void removeBook(int id);

    // Search for a book by title or author
    void searchBook(std::string keyword);

    // Display all books in the library
    void displayBooks();


    //------------------------------------------------------
    // Student management functions
    //------------------------------------------------------

    // Add a new student
    void addStudent(Student student);

    // Remove a student using their ID
    void removeStudent(int id);

    // Display all registered students
    void displayStudents();


    //------------------------------------------------------
    // Book issue and return functions
    //------------------------------------------------------

    // Mark a book as issued
    void issueBook(int bookID);

    // Mark a book as returned
    void returnBook(int bookID);
};

#endif