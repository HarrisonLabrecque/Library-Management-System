#include <iostream>

#include "include/Library.h"
#include "include/Book.h"
#include "include/Student.h"

using namespace std;

//------------------------------------------------------
// Main Function
// Entry point of the Library Management System
//------------------------------------------------------
int main()
{
    // Create a Library object to manage books and students
    Library library;

    // Variable to store the user's menu choice
    int choice;

    // Continue displaying the menu until the user chooses to exit
    do
    {
        //------------------------------------------------------
        // Display the main menu
        //------------------------------------------------------
        cout << "\n======================================" << endl;
        cout << "      Library Management System" << endl;
        cout << "======================================" << endl;
        cout << "1. Add New Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Remove Book" << endl;
        cout << "5. Add Student" << endl;
        cout << "6. Display Students" << endl;
        cout << "7. Remove Student" << endl;
        cout << "8. Issue Book" << endl;
        cout << "9. Return Book" << endl;
        cout << "0. Exit" << endl;
        cout << "======================================" << endl;
        cout << "Enter your choice: ";

        // Read the user's menu selection
        cin >> choice;

        //------------------------------------------------------
        // Perform the selected operation
        //------------------------------------------------------
        switch (choice)
        {
        //------------------------------------------------------
        // Add a new book
        //------------------------------------------------------
        case 1:
        {
            int id;
            string title;
            string author;
            string publisher;

            // Get book information from the user
            cout << "\nEnter Book ID: ";
            cin >> id;

            // Remove the newline character left by cin
            cin.ignore();

            cout << "Enter Title: ";
            getline(cin, title);

            cout << "Enter Author: ";
            getline(cin, author);

            cout << "Enter Publisher: ";
            getline(cin, publisher);

            // Create a new Book object
            Book book(id, title, author, publisher);

            // Add the book to the library
            library.addBook(book);

            break;
        }

        //------------------------------------------------------
        // Display every book
        //------------------------------------------------------
        case 2:
        {
            library.displayBooks();
            break;
        }

        //------------------------------------------------------
        // Search for a book
        //------------------------------------------------------
        case 3:
        {
            string keyword;

            // Remove leftover newline character
            cin.ignore();

            // Ask the user for a title or author
            cout << "Enter Title or Author: ";
            getline(cin, keyword);

            // Search the library
            library.searchBook(keyword);

            break;
        }

        //------------------------------------------------------
        // Remove a book
        //------------------------------------------------------
        case 4:
        {
            int id;

            // Ask for the book ID
            cout << "Enter Book ID to remove: ";
            cin >> id;

            // Remove the book
            library.removeBook(id);

            break;
        }

        //------------------------------------------------------
        // Register a new student
        //------------------------------------------------------
        case 5:
        {
            int id;
            string name;
            string phone;
            string email;

            // Get student information
            cout << "\nEnter Student ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Phone: ";
            getline(cin, phone);

            cout << "Enter Email: ";
            getline(cin, email);

            // Create a Student object
            Student student(id, name, phone, email);

            // Add the student to the library
            library.addStudent(student);

            break;
        }

        //------------------------------------------------------
        // Display all students
        //------------------------------------------------------
        case 6:
        {
            library.displayStudents();
            break;
        }

        //------------------------------------------------------
        // Remove a student
        //------------------------------------------------------
        case 7:
        {
            int id;

            // Ask for the student ID
            cout << "Enter Student ID to remove: ";
            cin >> id;

            // Remove the student
            library.removeStudent(id);

            break;
        }

        //------------------------------------------------------
        // Issue a book
        //------------------------------------------------------
        case 8:
        {
            int bookID;

            // Ask for the book ID
            cout << "Enter Book ID to issue: ";
            cin >> bookID;

            // Issue the book
            library.issueBook(bookID);

            break;
        }

        //------------------------------------------------------
        // Return a book
        //------------------------------------------------------
        case 9:
        {
            int bookID;

            // Ask for the book ID
            cout << "Enter Book ID to return: ";
            cin >> bookID;

            // Return the book
            library.returnBook(bookID);

            break;
        }

        //------------------------------------------------------
        // Exit the program
        //------------------------------------------------------
        case 0:
        {
            cout << "\nThank you for using the Library Management System!" << endl;
            break;
        }

        //------------------------------------------------------
        // Invalid menu choice
        //------------------------------------------------------
        default:
        {
            cout << "\nInvalid choice. Please try again." << endl;
        }
        }

    }
    // Continue until the user enters 0
    while (choice != 0);

    // Indicate successful program termination
    return 0;
}