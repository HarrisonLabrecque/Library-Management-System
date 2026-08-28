#include "Library.h"
#include "Student.h"
#include "Book.h"

#include <iostream>

using namespace std;

//------------------------------------------------------
// Add a new book to the library collection
//------------------------------------------------------
void Library::addBook(Book book)
{
    // Add the book object to the vector
    books.push_back(book);

    // Inform the user that the operation succeeded
    cout << "Book added successfully." << endl;
}

//------------------------------------------------------
// Remove a book using its ID
//------------------------------------------------------
void Library::removeBook(int id)
{
    // Loop through every book in the vector
    for (size_t i = 0; i < books.size(); i++)
    {
        // Check if the current book matches the requested ID
        if (books[i].getBookID() == id)
        {
            // Remove the book from the vector
            books.erase(books.begin() + i);

            // Display confirmation
            cout << "Book removed successfully." << endl;

            // Exit the function once the book is removed
            return;
        }
    }

    // If the loop finishes, the book was not found
    cout << "Book not found." << endl;
}

//------------------------------------------------------
// Search for a book by title or author
//------------------------------------------------------
void Library::searchBook(string keyword)
{
    // Variable to keep track of whether a match was found
    bool found = false;

    // Search through every book in the library
    for (size_t i = 0; i < books.size(); i++)
    {
        // Compare the keyword with the title and author
        if (books[i].getTitle() == keyword ||
            books[i].getAuthor() == keyword)
        {
            // Display matching book information
            books[i].displayBook();

            // Update the found flag
            found = true;
        }
    }

    // Notify the user if nothing matched
    if (!found)
    {
        cout << "No matching books found." << endl;
    }
}

//------------------------------------------------------
// Display every book in the library
//------------------------------------------------------
void Library::displayBooks()
{
    // Check if there are any books stored
    if (books.empty())
    {
        cout << "No books in the library." << endl;
        return;
    }

    // Loop through every book
    for (size_t i = 0; i < books.size(); i++)
    {
        // Display the current book
        books[i].displayBook();
    }
}

//------------------------------------------------------
// Add a new student
//------------------------------------------------------
void Library::addStudent(Student student)
{
    // Store the student object
    students.push_back(student);

    // Confirm the addition
    cout << "Student added successfully." << endl;
}

//------------------------------------------------------
// Remove a student using their ID
//------------------------------------------------------
void Library::removeStudent(int id)
{
    // Search through all registered students
    for (size_t i = 0; i < students.size(); i++)
    {
        // Check if the IDs match
        if (students[i].getStudentID() == id)
        {
            // Remove the student
            students.erase(students.begin() + i);

            // Display confirmation
            cout << "Student removed successfully." << endl;

            return;
        }
    }

    // Student was not found
    cout << "Student not found." << endl;
}

//------------------------------------------------------
// Display all registered students
//------------------------------------------------------
void Library::displayStudents()
{
    // Check if the student list is empty
    if (students.empty())
    {
        cout << "No students registered." << endl;
        return;
    }

    // Loop through every student
    for (size_t i = 0; i < students.size(); i++)
    {
        // Display the student's information
        students[i].displayStudent();
    }
}

//------------------------------------------------------
// Issue a book to a student
//------------------------------------------------------
void Library::issueBook(int bookID)
{
    // Search for the requested book
    for (size_t i = 0; i < books.size(); i++)
    {
        // Check if the IDs match
        if (books[i].getBookID() == bookID)
        {
            // Verify the book is available
            if (books[i].isAvailable())
            {
                // Mark the book as issued
                books[i].setAvailability(false);

                cout << "Book issued successfully." << endl;
            }
            else
            {
                // Book has already been issued
                cout << "Book is already issued." << endl;
            }

            return;
        }
    }

    // Book ID does not exist
    cout << "Book not found." << endl;
}

//------------------------------------------------------
// Return a previously issued book
//------------------------------------------------------
void Library::returnBook(int bookID)
{
    // Search for the book
    for (size_t i = 0; i < books.size(); i++)
    {
        // Check if the IDs match
        if (books[i].getBookID() == bookID)
        {
            // Verify the book is currently issued
            if (!books[i].isAvailable())
            {
                // Mark the book as available
                books[i].setAvailability(true);

                cout << "Book returned successfully." << endl;
            }
            else
            {
                // Book is already available
                cout << "Book is already available." << endl;
            }

            return;
        }
    }

    // Book ID was not found
    cout << "Book not found." << endl;
}